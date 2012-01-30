class Shot:

    def __init__(self):
        """The shot name"""
        self._name = guess_shot()

    @property
    def name(self):
        return self._name
    @name.setter
    def name(self, value):
        self._name = value
    @name.deleter
    def name(self, value):
        del self._name

    def guess_name(self):
        #TO DO
