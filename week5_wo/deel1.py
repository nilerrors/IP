class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y
    
    def print(self):
        print((self.x, self.y))

    def reflect_x(self):
        return Point(self.x, -self.y)

    def distance(self, point):
        return sqrt((point.x - self.x) ** 2 + (point.y - self.y) ** 2)

    def compute_line_to(self, point):
        a = (point.y - self.y) / (point.x - self.x)
        b = self.y - a * self.x
        return a, b

