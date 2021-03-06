/*
    Copyright (C) 2009 Andrew Caudwell (acaudwell@gmail.com)

    This program is free software; you can redistribute it and/or
    modify it under the terms of the GNU General Public License
    as published by the Free Software Foundation; either version
    3 of the License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef MAL4SLOG_H
#define MAL4SLOG_H

#include "commitlog.h"
#include "../gource_settings.h"

class Mal4sLog : public RCommitLog {
protected:
    bool parseCommit(RCommit& commit);
    bool parseCommitEntry(RCommit& commit);
    vec3 parseColour(const std::string& cstr);
public:
    Mal4sLog(const std::string& logfile);
    std::vector<std::string> &split(const std::string &s, char delim, std::vector<std::string> &elems);
    std::vector<std::string> split(const std::string &s, char delim);
};

#endif
