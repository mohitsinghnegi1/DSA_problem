class UnionFind:
    def __init__(self) -> None:
        super().__init__()
        self.representor = {}

    def make_set(self, key):
        self.representor[key] = key

    def find(self, key):
        return self.representor[key]

    def union(self, x, y):
        x_r, y_r = self.find(x), self.find(y)
        for k, r in self.representor.items():
            if r == y_r:
                self.representor[k] = x_r
