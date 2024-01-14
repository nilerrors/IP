class Rectangle:
    def __init__(self, corner, width, height):
        self.corner = corner
        self.width = width
        self.height = height
    
    def area(self):
        return self.width * self.height
    
    def equals(self, rect):
        return (self.corner.x == rect.corner.x and \
                self.corner.y == rect.corner.y and \
                self.width == rect.width and self.height == self.height)


