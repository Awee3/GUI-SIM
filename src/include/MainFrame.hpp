#ifndef MAINFRAME_HPP
#define MAINFRAME_HPP

#include <wx/wx.h>
#include <vector>
#include "user.hpp"

using namespace std;

class MainFrame : public wxFrame {
public:
    MainFrame(const wxString& title);

private:
    void OnLoginButton(wxCommandEvent& event);

    vector<User*> users;
    wxTextCtrl* nrpTextCtrl;
    wxTextCtrl*  passwordTextCtrl;
    wxDECLARE_EVENT_TABLE();
};

#endif 
