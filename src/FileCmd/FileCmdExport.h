/******************************************************************************************************
 * (C) 2014 markummitchell@github.com. This file is part of Engauge Digitizer, which is released      *
 * under GNU General Public License version 2 (GPLv2) or (at your option) any later version. See file *
 * LICENSE or go to gnu.org/licenses for details. Distribution requires prior written permission.     *
 ******************************************************************************************************/

#ifndef FILE_CMD_EXPORT_H
#define FILE_CMD_EXPORT_H

#include "FileCmdAbstract.h"

class QXmlStreamReader;

/// Command for exporting a file
class FileCmdExport : public FileCmdAbstract
{
public:
  /// Constructor for parsing file script xml
  FileCmdExport(QXmlStreamReader &reader);

  virtual ~FileCmdExport();

  virtual void redo (MainWindow &mainWindow);

private:
  FileCmdExport();

  QString m_filename;
};

#endif // FILE_CMD_EXPORT_H
