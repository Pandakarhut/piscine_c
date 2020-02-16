#!/bin/sh
cat $1 | grep -i "\(^\|\s\)nicolas\s.*\(^\|\s\)bauer\|\(^\|\s\)bauer.*\(^\|\s\)nicolas\s" | grep -Eow "[0-9-]+" | grep "-"