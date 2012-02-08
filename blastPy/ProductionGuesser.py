# ProductionGuesser.py
# 2/8/2012
# Anthony Hall
# anthrond@gmail.com

class ProductionGuesser:
    """A class which attempts to infer which production the user is """
    """working on."""

    @classmethod
    def from_current_directory(self, production_paths):
        """Returns a production path based on the current working path.  """
        """environment. This is done by checking the current path against """
        """a the passed-in list of production workspace paths.  """
        """If the production cannot be guessed, returns None."""
        current_path = os.path.normpath(os.getcwd());
        if (for path in [os.path.normpath(p) for p in production_paths]):
            if (current_path.startswith(path)):
                return path

        return None
