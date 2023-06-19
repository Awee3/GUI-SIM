#include "include/MainFrame.hpp"
#include"include/user.hpp"
#include "include/Dosen.hpp"
#include "include/Mahasiswa.hpp"
#include "include/Tendik.hpp"
#include "include/user.hpp"
#include<string.h>

using namespace std;
wxBEGIN_EVENT_TABLE(MainFrame, wxFrame)
    EVT_BUTTON(wxID_ANY, MainFrame::OnLoginButton)
wxEND_EVENT_TABLE()

MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, "Main Frame") {
    wxFont headLineFont(wxFontInfo(wxSize(0,36)).Bold());
    wxFont mainFont(wxFontInfo(wxSize(0,24)));
    wxPanel* panel = new wxPanel(this);
    panel->SetFont(mainFont);
    wxStaticText* headLineText = new wxStaticText(panel,wxID_ANY,"SISTEM INFORMASI AKADEMIK",wxPoint(0,22),wxSize(800,-1),wxALIGN_CENTER_HORIZONTAL);
    headLineText->SetFont(headLineFont);
    wxStaticText* staticText1 = new wxStaticText(panel,wxID_ANY,"MyITS ID:",wxPoint(250,295),wxSize(100,-1));
    wxStaticText* staticText2 = new wxStaticText(panel,wxID_ANY,"Password:",wxPoint(250,335),wxSize(100,-1));
    nrpTextCtrl = new wxTextCtrl(panel, wxID_ANY, wxEmptyString, wxPoint(400,295), wxSize(100,-1), 0);
    passwordTextCtrl = new wxTextCtrl(panel, wxID_ANY, wxEmptyString, wxPoint(400,335), wxSize(100,-1),wxTE_PASSWORD);

    users.push_back(new Dosen("Anton","011","ProgLan","Dosen","123"));
    users.push_back(new Mahasiswa("Ahmad", "064", "FTEIC", "Teknik Komputer","Mahasiswa","456"));
    users.push_back(new Tendik("Basyir", "069", "Tendik", "789"));

    wxButton* loginButton = new wxButton(panel, wxID_ANY, "Login",wxPoint(400,400),wxSize(100,35),wxBU_EXACTFIT);
}

void MainFrame::OnLoginButton(wxCommandEvent& event) {
    string nrpInput = nrpTextCtrl->GetValue().ToStdString();
    string passwordInput = passwordTextCtrl->GetValue().ToStdString();
    bool loginSuccessful = false;
    for (User* user : users) {
    if (user->checkCredentials(nrpInput, passwordInput)) {
        wxMessageBox(user->getData(), "User Data", wxOK | wxICON_INFORMATION);
        loginSuccessful = true;
        break;
    }
}
    if (!loginSuccessful) {
    wxMessageBox("Invalid username or password!", "Login Failed", wxOK | wxICON_ERROR);
}
}
   