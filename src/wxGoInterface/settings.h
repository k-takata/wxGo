WXGO_DECL_TYPECONV(SystemSettings)
%typedef int wxSystemFont;
#define wxSYS_OEM_FIXED_FONT  10
#define wxSYS_ANSI_FIXED_FONT wxSYS_OEM_FIXED_FONT  + 1
#define wxSYS_ANSI_VAR_FONT wxSYS_ANSI_FIXED_FONT + 1
#define wxSYS_SYSTEM_FONT wxSYS_ANSI_VAR_FONT + 1
#define wxSYS_DEVICE_DEFAULT_FONT wxSYS_SYSTEM_FONT + 1
#define wxSYS_DEFAULT_GUI_FONT wxSYS_DEVICE_DEFAULT_FONT + 1
%typedef int wxSystemColour;
#define wxSYS_COLOUR_SCROLLBAR 0
#define wxSYS_COLOUR_DESKTOP wxSYS_COLOUR_SCROLLBAR + 1
#define wxSYS_COLOUR_ACTIVECAPTION wxSYS_COLOUR_DESKTOP + 1
#define wxSYS_COLOUR_INACTIVECAPTION wxSYS_COLOUR_ACTIVECAPTION + 1
#define wxSYS_COLOUR_MENU wxSYS_COLOUR_INACTIVECAPTION + 1
#define wxSYS_COLOUR_WINDOW wxSYS_COLOUR_MENU + 1
#define wxSYS_COLOUR_WINDOWFRAME wxSYS_COLOUR_WINDOW + 1
#define wxSYS_COLOUR_MENUTEXT wxSYS_COLOUR_WINDOWFRAME + 1
#define wxSYS_COLOUR_WINDOWTEXT wxSYS_COLOUR_MENUTEXT + 1
#define wxSYS_COLOUR_CAPTIONTEXT wxSYS_COLOUR_WINDOWTEXT + 1
#define wxSYS_COLOUR_ACTIVEBORDER wxSYS_COLOUR_CAPTIONTEXT + 1
#define wxSYS_COLOUR_INACTIVEBORDER wxSYS_COLOUR_ACTIVEBORDER + 1
#define wxSYS_COLOUR_APPWORKSPACE wxSYS_COLOUR_INACTIVEBORDER + 1
#define wxSYS_COLOUR_HIGHLIGHT wxSYS_COLOUR_APPWORKSPACE + 1
#define wxSYS_COLOUR_HIGHLIGHTTEXT wxSYS_COLOUR_HIGHLIGHT + 1
#define wxSYS_COLOUR_BTNFACE wxSYS_COLOUR_HIGHLIGHTTEXT + 1
#define wxSYS_COLOUR_BTNSHADOW wxSYS_COLOUR_BTNFACE + 1
#define wxSYS_COLOUR_GRAYTEXT wxSYS_COLOUR_BTNSHADOW + 1
#define wxSYS_COLOUR_BTNTEXT wxSYS_COLOUR_GRAYTEXT + 1
#define wxSYS_COLOUR_INACTIVECAPTIONTEXT wxSYS_COLOUR_BTNTEXT + 1
#define wxSYS_COLOUR_BTNHIGHLIGHT wxSYS_COLOUR_INACTIVECAPTIONTEXT + 1
#define wxSYS_COLOUR_3DDKSHADOW wxSYS_COLOUR_BTNHIGHLIGHT + 1
#define wxSYS_COLOUR_3DLIGHT wxSYS_COLOUR_3DDKSHADOW + 1
#define wxSYS_COLOUR_INFOTEXT wxSYS_COLOUR_3DLIGHT + 1
#define wxSYS_COLOUR_INFOBK wxSYS_COLOUR_INFOTEXT + 1
#define wxSYS_COLOUR_LISTBOX wxSYS_COLOUR_INFOBK + 1
#define wxSYS_COLOUR_HOTLIGHT wxSYS_COLOUR_LISTBOX + 1
#define wxSYS_COLOUR_GRADIENTACTIVECAPTION wxSYS_COLOUR_HOTLIGHT + 1
#define wxSYS_COLOUR_GRADIENTINACTIVECAPTION wxSYS_COLOUR_GRADIENTACTIVECAPTION + 1
#define wxSYS_COLOUR_MENUHILIGHT wxSYS_COLOUR_GRADIENTINACTIVECAPTION + 1
#define wxSYS_COLOUR_MENUBAR wxSYS_COLOUR_MENUHILIGHT + 1
#define wxSYS_COLOUR_LISTBOXTEXT wxSYS_COLOUR_MENUBAR + 1
#define wxSYS_COLOUR_LISTBOXHIGHLIGHTTEXT wxSYS_COLOUR_LISTBOXTEXT + 1
#define wxSYS_COLOUR_MAX wxSYS_COLOUR_LISTBOXHIGHLIGHTTEXT + 1
#define wxSYS_COLOUR_BACKGROUND  wxSYS_COLOUR_DESKTOP
#define wxSYS_COLOUR_3DFACE  wxSYS_COLOUR_BTNFACE
#define wxSYS_COLOUR_3DSHADOW  wxSYS_COLOUR_BTNSHADOW
#define wxSYS_COLOUR_BTNHILIGHT  wxSYS_COLOUR_BTNHIGHLIGHT
#define wxSYS_COLOUR_3DHIGHLIGHT  wxSYS_COLOUR_BTNHIGHLIGHT
#define wxSYS_COLOUR_3DHILIGHT  wxSYS_COLOUR_BTNHIGHLIGHT
#define wxSYS_COLOUR_FRAMEBK  wxSYS_COLOUR_BTNFACE
%typedef int wxSystemMetric;
#define wxSYS_MOUSE_BUTTONS 0
#define wxSYS_BORDER_X wxSYS_MOUSE_BUTTONS + 1
#define wxSYS_BORDER_Y wxSYS_BORDER_X + 1
#define wxSYS_CURSOR_X wxSYS_BORDER_Y + 1
#define wxSYS_CURSOR_Y wxSYS_CURSOR_X + 1
#define wxSYS_DCLICK_X wxSYS_CURSOR_Y + 1
#define wxSYS_DCLICK_Y wxSYS_DCLICK_X + 1
#define wxSYS_DRAG_X wxSYS_DCLICK_Y + 1
#define wxSYS_DRAG_Y wxSYS_DRAG_X + 1
#define wxSYS_EDGE_X wxSYS_DRAG_Y + 1
#define wxSYS_EDGE_Y wxSYS_EDGE_X + 1
#define wxSYS_HSCROLL_ARROW_X wxSYS_EDGE_Y + 1
#define wxSYS_HSCROLL_ARROW_Y wxSYS_HSCROLL_ARROW_X + 1
#define wxSYS_HTHUMB_X wxSYS_HSCROLL_ARROW_Y + 1
#define wxSYS_ICON_X wxSYS_HTHUMB_X + 1
#define wxSYS_ICON_Y wxSYS_ICON_X + 1
#define wxSYS_ICONSPACING_X wxSYS_ICON_Y + 1
#define wxSYS_ICONSPACING_Y wxSYS_ICONSPACING_X + 1
#define wxSYS_WINDOWMIN_X wxSYS_ICONSPACING_Y + 1
#define wxSYS_WINDOWMIN_Y wxSYS_WINDOWMIN_X + 1
#define wxSYS_SCREEN_X wxSYS_WINDOWMIN_Y + 1
#define wxSYS_SCREEN_Y wxSYS_SCREEN_X + 1
#define wxSYS_FRAMESIZE_X wxSYS_SCREEN_Y + 1
#define wxSYS_FRAMESIZE_Y wxSYS_FRAMESIZE_X + 1
#define wxSYS_SMALLICON_X wxSYS_FRAMESIZE_Y + 1
#define wxSYS_SMALLICON_Y wxSYS_SMALLICON_X + 1
#define wxSYS_HSCROLL_Y wxSYS_SMALLICON_Y + 1
#define wxSYS_VSCROLL_X wxSYS_HSCROLL_Y + 1
#define wxSYS_VSCROLL_ARROW_X wxSYS_VSCROLL_X + 1
#define wxSYS_VSCROLL_ARROW_Y wxSYS_VSCROLL_ARROW_X + 1
#define wxSYS_VTHUMB_Y wxSYS_VSCROLL_ARROW_Y + 1
#define wxSYS_CAPTION_Y wxSYS_VTHUMB_Y + 1
#define wxSYS_MENU_Y wxSYS_CAPTION_Y + 1
#define wxSYS_NETWORK_PRESENT wxSYS_MENU_Y + 1
#define wxSYS_PENWINDOWS_PRESENT wxSYS_NETWORK_PRESENT + 1
#define wxSYS_SHOW_SOUNDS wxSYS_PENWINDOWS_PRESENT + 1
#define wxSYS_SWAP_BUTTONS wxSYS_SHOW_SOUNDS + 1
#define wxSYS_DCLICK_MSEC wxSYS_SWAP_BUTTONS + 1
%typedef int wxSystemFeature;
#define wxSYS_CAN_DRAW_FRAME_DECORATIONS  1
#define wxSYS_CAN_ICONIZE_FRAME wxSYS_CAN_DRAW_FRAME_DECORATIONS  + 1
#define wxSYS_TABLET_PRESENT wxSYS_CAN_ICONIZE_FRAME + 1
%typedef int wxSystemScreenType;
#define wxSYS_SCREEN_NONE  0
#define wxSYS_SCREEN_TINY wxSYS_SCREEN_NONE  + 1
#define wxSYS_SCREEN_PDA wxSYS_SCREEN_TINY + 1
#define wxSYS_SCREEN_SMALL wxSYS_SCREEN_PDA + 1
#define wxSYS_SCREEN_DESKTOP wxSYS_SCREEN_SMALL + 1
class wxSystemSettings : public wxObject
{
public:
    wxSystemSettings();
    static wxColour GetColour(wxSystemColour index);
    static wxFont GetFont(wxSystemFont index);
    static int GetMetric(wxSystemMetric index, wxWindow* win = NULL);
    static wxSystemScreenType GetScreenType();
    static bool HasFeature(wxSystemFeature index);
};