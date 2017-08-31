#define VFX_XML_VER_MAJOR (1)
#define VFX_XML_VER_MINOR (0)


enum VfxXmlEnumIdEnum
{
    VFX_XML_ENUM_ID_Unknown = 0,
    VFX_XML_ENUM_ID_VCP_TEXT_LINE_MODE_SINGLE,
    VFX_XML_ENUM_ID_VCP_TEXT_LINE_MODE_MULTI,
    VFX_XML_ENUM_ID_VCP_TEXT_NORMAL_TEXT_COLOR,
    VFX_XML_ENUM_ID_VCP_TEXT_HINT_TEXT_COLOR,
    VFX_XML_ENUM_ID_VCP_TEXT_HIGHLIGHTED_TEXT_COLOR,
    VFX_XML_ENUM_ID_VCP_TEXT_HIGHLIGHT_FILLER_COLOR,
    VFX_XML_ENUM_ID_VCP_TEXT_UNDERLINE_COLOR,
    VFX_XML_ENUM_ID_VCP_TEXT_ALIGN_MODE_NATURAL,
    VFX_XML_ENUM_ID_VCP_TEXT_ALIGN_MODE_LEFT,
    VFX_XML_ENUM_ID_VCP_TEXT_ALIGN_MODE_RIGHT,
    VFX_XML_ENUM_ID_VCP_TEXT_ALIGN_MODE_CENTER,
    VFX_XML_ENUM_ID_VCP_TEXT_ALIGN_MODE_CENTER_WITHIN_MARGIN,
    VFX_XML_ENUM_ID_VCP_TEXT_VERT_ALIGN_MODE_TOP,
    VFX_XML_ENUM_ID_VCP_TEXT_VERT_ALIGN_MODE_MID,
    VFX_XML_ENUM_ID_VCP_TEXT_VERT_ALIGN_MODE_BOTTOM,
    VFX_XML_ENUM_ID_VCP_TEXT_TRUNCATE_MODE_NONE,
    VFX_XML_ENUM_ID_VCP_TEXT_TRUNCATE_MODE_END,
    VFX_XML_ENUM_ID_VCP_TEXT_TRUNCATE_MODE_MID,
    VFX_XML_ENUM_ID_VCP_TEXT_MARGIN_FRAME_LEFT,
    VFX_XML_ENUM_ID_VCP_TEXT_MARGIN_FRAME_RIGHT,
    VFX_XML_ENUM_ID_VCP_TEXT_MARGIN_FRAME_TOP,
    VFX_XML_ENUM_ID_VCP_TEXT_MARGIN_FRAME_BOTTOM,
    VFX_XML_ENUM_ID_VCP_TEXT_ENCODING_UCS2,
    VFX_XML_ENUM_ID_VCP_TEXT_ENCODING_GB2312,
    VFX_XML_ENUM_ID_VFX_FRAME_CULLING_TYPE_NONE,
    VFX_XML_ENUM_ID_VFX_FRAME_CULLING_TYPE_BACK,
    VFX_XML_ENUM_ID_VFX_FRAME_CULLING_TYPE_FRONT,
    VFX_XML_ENUM_ID_VFX_FRAME_CONTENT_PLACEMENT_TYPE_TOP_LEFT,
    VFX_XML_ENUM_ID_VFX_FRAME_CONTENT_PLACEMENT_TYPE_TOP,
    VFX_XML_ENUM_ID_VFX_FRAME_CONTENT_PLACEMENT_TYPE_TOP_RIGHT,
    VFX_XML_ENUM_ID_VFX_FRAME_CONTENT_PLACEMENT_TYPE_LEFT,
    VFX_XML_ENUM_ID_VFX_FRAME_CONTENT_PLACEMENT_TYPE_CENTER,
    VFX_XML_ENUM_ID_VFX_FRAME_CONTENT_PLACEMENT_TYPE_RIGHT,
    VFX_XML_ENUM_ID_VFX_FRAME_CONTENT_PLACEMENT_TYPE_BOTTOM_LEFT,
    VFX_XML_ENUM_ID_VFX_FRAME_CONTENT_PLACEMENT_TYPE_BOTTOM,
    VFX_XML_ENUM_ID_VFX_FRAME_CONTENT_PLACEMENT_TYPE_BOTTOM_RIGHT,
    VFX_XML_ENUM_ID_VFX_FRAME_CONTENT_PLACEMENT_TYPE_RESIZE,
    VFX_XML_ENUM_ID_VFX_FRAME_CONTENT_PLACEMENT_TYPE_RESIZE_ASPECT,
    VFX_XML_ENUM_ID_VFX_FRAME_CONTENT_PLACEMENT_TYPE_RESIZE_ASPECT_FILL,
    VFX_XML_ENUM_ID_VCP_SEGMENT_BUTTON_TYPE_GROUP,
    VFX_XML_ENUM_ID_VCP_SEGMENT_BUTTON_TYPE_RADIO,
    VFX_XML_ENUM_ID_VCP_SEGMENT_BUTTON_STYLE_IMAGE_ONLY,
    VFX_XML_ENUM_ID_VCP_SEGMENT_BUTTON_STYLE_TEXT_ONLY,
    VFX_XML_ENUM_ID_VCP_LIST_MENU_CELL_STYLE_NONE,
    VFX_XML_ENUM_ID_VCP_LIST_MENU_CELL_STYLE_CUSTOM,
    VFX_XML_ENUM_ID_VCP_LIST_MENU_CELL_STYLE_SINGLE_TEXT,
    VFX_XML_ENUM_ID_VCP_LIST_MENU_CELL_STYLE_MULTI_TEXT,
    VFX_XML_ENUM_ID_VCP_LIST_MENU_CELL_STYLE_MULTI_TEXT_EX,
    VFX_XML_ENUM_ID_VCP_LIST_MENU_CELL_STYLE_TRIPLE_TEXT,
    VFX_XML_ENUM_ID_VCP_LIST_MENU_CELL_STYLE_TRIPLE_TEXT_EX,
    VFX_XML_ENUM_ID_VCP_LIST_MENU_CELL_STYLE_QUADRUPLE_TEXT,
    VFX_XML_ENUM_ID_VCP_LIST_MENU_CELL_STYLE_ICON_SINGLE_TEXT,
    VFX_XML_ENUM_ID_VCP_LIST_MENU_CELL_STYLE_ICON_SINGLE_TEXT_EX,
    VFX_XML_ENUM_ID_VCP_LIST_MENU_CELL_STYLE_ICON_MULTI_TEXT,
    VFX_XML_ENUM_ID_VCP_LIST_MENU_CELL_STYLE_ICON_MULTI_TEXT_EX,
    VFX_XML_ENUM_ID_VCP_LIST_MENU_CELL_STYLE_ICON_TRIPLE_TEXT,
    VFX_XML_ENUM_ID_VCP_LIST_MENU_CELL_STYLE_ICON_TRIPLE_TEXT_EX,
    VFX_XML_ENUM_ID_VCP_LIST_MENU_CELL_STYLE_ICON_QUADRUPLE_TEXT,
    VFX_XML_ENUM_ID_VCP_LIST_MENU_CELL_STYLE_ICON_QUINTUPLE_TEXT,
    VFX_XML_ENUM_ID_VCP_LIST_MENU_CELL_STYLE_MAX,
    VFX_XML_ENUM_ID_VCP_LIST_MENU_FOCUS_BEHAVIOR_NONE,
    VFX_XML_ENUM_ID_VCP_LIST_MENU_FOCUS_BEHAVIOR_SEMI,
    VFX_XML_ENUM_ID_VCP_LIST_MENU_FOCUS_BEHAVIOR_ALWAYS,
    VFX_XML_ENUM_ID_VCP_LIST_MENU_MODE_NORMAL,
    VFX_XML_ENUM_ID_VCP_LIST_MENU_MODE_REORDER,
    VFX_XML_ENUM_ID_VCP_LIST_MENU_MODE_SINGLE_SELECTION,
    VFX_XML_ENUM_ID_VCP_LIST_MENU_MODE_MULTI_SELECTION,
    VFX_XML_ENUM_ID_VCP_LIST_MENU_MODE_HEAD_SINGLE_CHECK_MARK,
    VFX_XML_ENUM_ID_VCP_LIST_MENU_MODE_HEAD_MULTI_CHECK_MARK,
    VFX_XML_ENUM_ID_VCP_LIST_MENU_MODE_TAIL_SINGLE_CHECK_MARK,
    VFX_XML_ENUM_ID_VCP_LIST_MENU_MODE_TAIL_MULTI_CHECK_MARK,
    VFX_XML_ENUM_ID_VCP_LIST_MENU_CONTROL_MODE_NORMAL,
    VFX_XML_ENUM_ID_VCP_LIST_MENU_CONTROL_MODE_CMD_BUTTON,
    VFX_XML_ENUM_ID_VCP_LIST_MENU_CONTROL_MODE_DISCLOSURE,
    VFX_XML_ENUM_ID_VCP_BUTTON_PLACEMENT_TEXT_ONLY,
    VFX_XML_ENUM_ID_VCP_BUTTON_PLACEMENT_IMAGE_ONLY,
    VFX_XML_ENUM_ID_VCP_BUTTON_PLACEMENT_IMAGE_LEFT,
    VFX_XML_ENUM_ID_VCP_BUTTON_PLACEMENT_IMAGE_RIGHT,
    VFX_XML_ENUM_ID_VCP_BUTTON_PLACEMENT_IMAGE_TOP,
    VFX_XML_ENUM_ID_VCP_BUTTON_PLACEMENT_IMAGE_BOTTOM,
    VFX_XML_ENUM_ID_VCP_BUTTON_PLACEMENT_OVERLAP,
    VFX_XML_ENUM_ID_VCP_BUTTON_PLACEMENT_TEXT_ONLY_LEFT,
    VFX_XML_ENUM_ID_VCP_BUTTON_PLACEMENT_TEXT_LEFT_IMAGE_RIGHT,
    VFX_XML_ENUM_ID_END_OF_ENUM
};

enum VfxXmlStructIdEnum
{
    VFX_XML_STRUCT_ID_Unknown = 0,
    VFX_XML_STRUCT_ID_VcpTabBarItem,
    VFX_XML_STRUCT_ID_VcpSegmentButtonItem,
    VFX_XML_STRUCT_ID_END_OF_ENUM
};

enum VfxXmlStructMemberIdEnum
{
    VFX_XML_STRUCT_MEMBER_ID_Unknown = 0,
    VFX_XML_STRUCT_MEMBER_ID_VcpTabBarItem_id,
    VFX_XML_STRUCT_MEMBER_ID_VcpTabBarItem_imagelist,
    VFX_XML_STRUCT_MEMBER_ID_VcpTabBarItem_text,
    VFX_XML_STRUCT_MEMBER_ID_VcpSegmentButtonItem_id,
    VFX_XML_STRUCT_MEMBER_ID_VcpSegmentButtonItem_image,
    VFX_XML_STRUCT_MEMBER_ID_VcpSegmentButtonItem_text,
    VFX_XML_STRUCT_MEMBER_ID_END_OF_ENUM
};

enum VfxXmlClassIdEnum
{
    VFX_XML_CLASS_ID_Unknown = 0,
    VFX_XML_CLASS_ID_VfxObject,
    VFX_XML_CLASS_ID_VfxFrame,
    VFX_XML_CLASS_ID_VfxImageFrame,
    VFX_XML_CLASS_ID_VfxAnimImageFrame,
    VFX_XML_CLASS_ID_VfxTextFrame,
    VFX_XML_CLASS_ID_VcpTextView,
    VFX_XML_CLASS_ID_VcpTextEditor,
    VFX_XML_CLASS_ID_VfxControl,
    VFX_XML_CLASS_ID_VfxScreen,
    VFX_XML_CLASS_ID_VfxAppCatScr,
    VFX_XML_CLASS_ID_VfxTimer,
    VFX_XML_CLASS_ID_VfxPage,
    VFX_XML_CLASS_ID_VfxPageBar,
    VFX_XML_CLASS_ID_VcpStatusIconBar,
    VFX_XML_CLASS_ID_VcpCommandTitle,
    VFX_XML_CLASS_ID_VcpButton,
    VFX_XML_CLASS_ID_VcpImageButton,
    VFX_XML_CLASS_ID_VcpSwitch,
    VFX_XML_CLASS_ID_VcpTabBar,
    VFX_XML_CLASS_ID_VcpPagePanel,
    VFX_XML_CLASS_ID_VcpSegmentButton,
    VFX_XML_CLASS_ID_VcpListMenu,
    VFX_XML_CLASS_ID_VcpGroupListMenu,
    VFX_XML_CLASS_ID_END_OF_ENUM
};

enum VfxXmlPropIdEnum
{
    VFX_XML_PROP_ID_Unknown = 0,
    VFX_XML_PROP_ID_VfxObject_items,
    VFX_XML_PROP_ID_VfxObject_name,
    VFX_XML_PROP_ID_VfxFrame_pos,
    VFX_XML_PROP_ID_VfxFrame_size,
    VFX_XML_PROP_ID_VfxFrame_bounds,
    VFX_XML_PROP_ID_VfxFrame_rect,
    VFX_XML_PROP_ID_VfxFrame_anchor,
    VFX_XML_PROP_ID_VfxFrame_opacity,
    VFX_XML_PROP_ID_VfxFrame_bgColor,
    VFX_XML_PROP_ID_VfxFrame_borderWidth,
    VFX_XML_PROP_ID_VfxFrame_borderColor,
    VFX_XML_PROP_ID_VfxFrame_autoAnimate,
    VFX_XML_PROP_ID_VfxFrame_cullingType,
    VFX_XML_PROP_ID_VfxFrame_contentPlacement,
    VFX_XML_PROP_ID_VfxFrame_alignParent,
    VFX_XML_PROP_ID_VfxImageFrame_resId,
    VFX_XML_PROP_ID_VfxImageFrame_path,
    VFX_XML_PROP_ID_VfxAnimImageFrame_RepeatCount,
    VFX_XML_PROP_ID_VfxAnimImageFrame_EndIndex,
    VFX_XML_PROP_ID_VfxTextFrame_text,
    VFX_XML_PROP_ID_VfxTextFrame_color,
    VFX_XML_PROP_ID_VfxTextFrame_borderColor,
    VFX_XML_PROP_ID_VcpTextView_mode,
    VFX_XML_PROP_ID_VcpTextEditor_mode,
    VFX_XML_PROP_ID_VfxTimer_startDelay,
    VFX_XML_PROP_ID_VfxTimer_duration,
    VFX_XML_PROP_ID_VfxTimer_tick,
    VFX_XML_PROP_ID_VfxPage_statusBar,
    VFX_XML_PROP_ID_VfxPage_barAutoHide,
    VFX_XML_PROP_ID_VfxPage_translucent,
    VFX_XML_PROP_ID_VfxPage_topBar,
    VFX_XML_PROP_ID_VfxPage_bottomBar,
    VFX_XML_PROP_ID_VcpCommandTitle_text,
    VFX_XML_PROP_ID_VcpButton_id,
    VFX_XML_PROP_ID_VcpButton_isAutoResized,
    VFX_XML_PROP_ID_VcpButton_placement,
    VFX_XML_PROP_ID_VcpButton_text,
    VFX_XML_PROP_ID_VcpButton_image,
    VFX_XML_PROP_ID_VcpButton_innerRect,
    VFX_XML_PROP_ID_VcpButton_clicked,
    VFX_XML_PROP_ID_VcpImageButton_id,
    VFX_XML_PROP_ID_VcpImageButton_isStretchMode,
    VFX_XML_PROP_ID_VcpImageButton_isHighlight,
    VFX_XML_PROP_ID_VcpImageButton_image,
    VFX_XML_PROP_ID_VcpImageButton_clicked,
    VFX_XML_PROP_ID_VcpSwitch_checked,
    VFX_XML_PROP_ID_VcpTabBar_HighlightedTab,
    VFX_XML_PROP_ID_VcpTabBar_tab,
    VFX_XML_PROP_ID_VcpSegmentButton_button,
    VFX_XML_PROP_ID_VcpSegmentButton_type,
    VFX_XML_PROP_ID_VcpSegmentButton_style,
    VFX_XML_PROP_ID_VcpListMenu_cellStyle,
    VFX_XML_PROP_ID_VcpListMenu_menuMode,
    VFX_XML_PROP_ID_VcpListMenu_menuControlMode,
    VFX_XML_PROP_ID_VcpGroupListMenu_cellStyle,
    VFX_XML_PROP_ID_VcpGroupListMenu_menuMode,
    VFX_XML_PROP_ID_VcpGroupListMenu_menuControlMode,
    VFX_XML_PROP_ID_END_OF_ENUM
};

enum VfxXmlSlotIdEnum
{
    VFX_XML_SLOT_ID_Unknown = 0,
    VFX_XML_SLOT_ID_END_OF_ENUM
};

