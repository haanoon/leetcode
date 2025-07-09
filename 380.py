class RandomizedSet:

    def __init__(self):
        self.lst = []
        self.idx_map = {}

    def search(self,val):
        return val in self.lst

    def insert(self, val: int) -> bool:
        if self.search(val):
            return False
        self.lst.append(val)
        self.idx_map[val] = len(self.lst) - 1
        return True

    def remove(self, val: int) -> bool:
        if not self.search(val):
            return False
        idx = self.idx_map[val]
        self.lst[idx] = self.lst[-1]
        self.idx_map[self.lst[-1]] = idx
        self.lst.pop()
        del self.idx_map[val]
        return True

    def getRandom(self) -> int:
        return random.choice(self.lst)
