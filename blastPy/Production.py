# Production.py
# 2/8/2012
# Anthony Hall
# anthrond@gmail.com

class Production:
    """Represents an entire production, e.g. Estefan, Butchered Meats, etc."""

    def __init__(self):
        self._DEFAULT_WORKSPACE_FILENAME = "workspace.mel"
        self._directory = "//grp5/estefan/production3d/"
        self._workspace_file = self._directory + \
                self._DEFAULT_WORKSPACE_FILENAME

    @classmethod
    def create_from_path(self, path):
        """Returns a new Production object with the given path."""
        ret = Production()
        ret.directory = path
        return ret

    @property
    def directory(self):
        """The production workspace folder"""
        return self._directory

    @directory.setter
    def directory(self, value):
        """A setter for the production directory.  A final '/'"""
        """character is added if it is not provided, but no other measures """
        """are taken to guarentee the passed directory name is valid."""
        """Sets the workspace.mel filename from the production path."""
        if (length(value) > 0 and value[-1] != '/'):
            self._directory = value + '/'
        else:
            self._directory = value
        self._workspace_file = self._directory + \
                self._DEFAULT_WORKSPACE_FILENAME

    @property
    def workspace_file(self):
        """Returns the workspace file for the production or project"""
        return self._workspace_file

