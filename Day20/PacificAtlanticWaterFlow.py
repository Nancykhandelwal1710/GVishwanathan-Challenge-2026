class Solution(object):
    def pacificAtlantic(self, heights):

        if not heights:
            return []

        rows = len(heights)
        cols = len(heights[0])

        pacific = set()
        atlantic = set()

        def dfs(r, c, visited, prev):

            if (r < 0 or c < 0 or
                r == rows or c == cols or
                (r, c) in visited or
                heights[r][c] < prev):
                return

            visited.add((r, c))

            dfs(r + 1, c, visited, heights[r][c])
            dfs(r - 1, c, visited, heights[r][c])
            dfs(r, c + 1, visited, heights[r][c])
            dfs(r, c - 1, visited, heights[r][c])

        for i in range(rows):
            dfs(i, 0, pacific, heights[i][0])
            dfs(i, cols - 1, atlantic, heights[i][cols - 1])

        for j in range(cols):
            dfs(0, j, pacific, heights[0][j])
            dfs(rows - 1, j, atlantic, heights[rows - 1][j])

        return list(pacific & atlantic)
    