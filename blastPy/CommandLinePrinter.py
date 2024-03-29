import re

class CommandLinePrinter:

    def command_line(self, prefs, filename):
        line = "Render -r rman "
        for p in prefs:
            line += " -SetAttr " + p.command_text + " \"" + re.sub( \
                    r"\"", r'\\\"', p.value) + "\""
        line += " " + filename

        return line
