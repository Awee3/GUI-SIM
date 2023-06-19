#include <wx/wx.h>
#include <vector>
#include "include/User.hpp"
#include "include/Dosen.hpp"
#include "include/Mahasiswa.hpp"
#include "include/Tendik.hpp"
#include "include/MainFrame.hpp" 

class MyApp : public wxApp {
public:
    bool OnInit() {
        
        MainFrame* frame = new MainFrame("GUI SIM");
        frame->Show();
        frame->SetClientSize(800,600);
        frame->Center();
        return true;
    }
};

wxIMPLEMENT_APP(MyApp);

