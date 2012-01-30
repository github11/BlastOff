from Preference import Preference
from CommandLinePrinter import CommandLinePrinter

tob = Preference()
tob2 = Preference.from_args('Second pref friendly name', 'secondPrefCmd', \
        '20 21 22 23')
tob3 = Preference.from_args('Third pref friendly name', 'thirdPrefName', \
        '30 31 32')
prefs = [tob, tob2, tob3]
com = CommandLinePrinter()
line = com.command_line(prefs, 'test.rib')
print line
