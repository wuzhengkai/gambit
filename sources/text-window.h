//
// $Source$
// $Date$
// $Revision$
//
// DESCRIPTION:
// A custom static text-style window
//
// This file is part of Gambit
// Copyright (c) 2004, The Gambit Project
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
//

#ifndef TEXT_WINDOW_H
#define TEXT_WINDOW_H

class gbtTextWindow : public wxScrolledWindow {
private:
  bool m_underline;
  wxString m_label, m_longestLabel;

  void OnPaint(wxPaintEvent &);
  void OnLeftDown(wxMouseEvent &);

public:
  gbtTextWindow(wxWindow *p_parent, wxWindowID, 
		const wxString &, const wxString & = wxT(""));
  virtual ~gbtTextWindow() { }

  wxSize GetBestSize(void) const;

  void SetLabel(const wxString &p_label)  { m_label = p_label; Refresh(); }

  bool GetUnderline(void) const { return m_underline; }
  void SetUnderline(bool p_underline) { m_underline = p_underline; Refresh(); }

  DECLARE_EVENT_TABLE()
};

#endif  // TEXT_WINDOW_H