from collections import defaultdict

class Solution(object):
    def canFinish(self, numCourses, prerequisites):

        graph = defaultdict(list)

        for a, b in prerequisites:
            graph[a].append(b)

        visit = set()

        def dfs(course):

            if course in visit:
                return False

            if graph[course] == []:
                return True

            visit.add(course)

            for pre in graph[course]:
                if not dfs(pre):
                    return False

            visit.remove(course)
            graph[course] = []

            return True

        for course in range(numCourses):
            if not dfs(course):
                return False

        return True
    