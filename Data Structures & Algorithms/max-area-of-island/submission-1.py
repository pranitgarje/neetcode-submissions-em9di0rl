class Solution:
    def bfs(self, i, j, grid):
        # Boundary check + water check
        if (
            i < 0
            or i >= len(grid)
            or j < 0
            or j >= len(grid[0])
            or grid[i][j] == 0
        ):
            return 0

        # Mark current cell as visited
        grid[i][j] = 0
        area=1

        # Visit all 4 directions
        area+=self.bfs(i + 1, j, grid)
        area+=self.bfs(i - 1, j, grid)
        area+=self.bfs(i, j + 1, grid)
        area+=self.bfs(i, j - 1, grid)
        return area
    def maxAreaOfIsland(self, grid: List[List[int]]) -> int:
        max_area = 0

        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if grid[i][j] == 1:
                    area=self.bfs(i, j, grid)
                    max_area=max(max_area,area)

        return max_area
        