# Preference.py
# 2/8/2012
# Anthony Hall
# anthrond@gmail.com

class Preference:
    """Represents a single Renderman(tm) rendering option"""

    def __init__(self):
        self._name = "Default Preference Name"
        self._command_text = "default-command-text"
        self._value = "default-value"

    @classmethod
    def from_args(self, friendly_name, command_text, value):
        new_pref = Preference()
        new_pref._name = friendly_name
        new_pref._command_text = command_text
        new_pref._value = value
        return new_pref

    @property
    def name(self):
        """The user-friendly name for a preference."""
        return self._name
    @name.setter
    def name(self, value):
        self._name = value
#    @name.deleter
#    def name(self):
#        del self._name

    @property
    def command_text(self):
        """The actuall parameter text that will be emmited with the"""
        """command"""
        return self._command_text
    @command_text.setter
    def command_text(self, value):
        self._command_text = value
    @command_text.deleter
    def command_text(self):
        del self._command_text

    @property
    def value(self):
        return self._value
    @value.setter
    def value(self, value):
        self._value = value
#    @value.deleter
#    def value(self):
#        del self._value
