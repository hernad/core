frm_lib = shared_library('frm',
  'source/component/Button.cxx',
  'source/component/cachedrowset.cxx',
  'source/component/CheckBox.cxx',
  'source/component/clickableimage.cxx',
  'source/component/cloneable.cxx',
  'source/component/errorbroadcaster.cxx',
  'source/component/Columns.cxx',
  'source/component/ComboBox.cxx',
  'source/component/Currency.cxx',
  'source/component/Date.cxx',
  'source/component/DatabaseForm.cxx',
  'source/component/EditBase.cxx',
  'source/component/Edit.cxx',
  'source/component/entrylisthelper.cxx',
  'source/component/EventThread.cxx',
  'source/component/File.cxx',
  'source/component/Filter.cxx',
  'source/component/findpos.cxx',
  'source/component/FixedText.cxx',
  'source/component/FormattedField.cxx',
  'source/component/FormattedFieldWrapper.cxx',
  'source/component/FormComponent.cxx',
  'source/component/formcontrolfont.cxx',
  'source/component/FormsCollection.cxx',
  'source/component/Grid.cxx',
  'source/component/GroupBox.cxx',
  'source/component/GroupManager.cxx',
  'source/component/Hidden.cxx',
  'source/component/ImageButton.cxx',
  'source/component/ImageControl.cxx',
  'source/component/imgprod.cxx',
  'source/component/ListBox.cxx',
  'source/component/navigationbar.cxx',
  'source/component/Numeric.cxx',
  'source/component/Pattern.cxx',
  'source/component/propertybaghelper.cxx',
  'source/component/RadioButton.cxx',
  'source/component/refvaluecomponent.cxx',
  'source/component/scrollbar.cxx',
  'source/component/spinbutton.cxx',
  'source/component/Time.cxx',
  'source/helper/commandimageprovider.cxx',
  'source/helper/controlfeatureinterception.cxx',
  'source/helper/formnavigation.cxx',
  'source/helper/resettable.cxx',
  'source/helper/urltransformer.cxx',
  'source/helper/windowstateguard.cxx',
  'source/misc/componenttools.cxx',
  'source/misc/InterfaceContainer.cxx',
  'source/misc/limitedformats.cxx',
  'source/misc/listenercontainers.cxx',
  'source/misc/property.cxx',
  'source/resource/frm_resource.cxx',
  'source/richtext/attributedispatcher.cxx',
  'source/richtext/clipboarddispatcher.cxx',
  'source/richtext/featuredispatcher.cxx',
  'source/richtext/parametrizedattributedispatcher.cxx',
  'source/richtext/richtextcontrol.cxx',
  'source/richtext/richtextengine.cxx',
  'source/richtext/richtextimplcontrol.cxx',
  'source/richtext/richtextmodel.cxx',
  'source/richtext/richtextunowrapper.cxx',
  'source/richtext/richtextvclcontrol.cxx',
  'source/richtext/richtextviewport.cxx',
  'source/richtext/rtattributehandler.cxx',
  'source/richtext/specialdispatchers.cxx',
  'source/runtime/formoperations.cxx',
  'source/solar/component/navbarcontrol.cxx',
  'source/solar/control/navtoolbar.cxx',
  'source/xforms/binding.cxx',
  'source/xforms/boolexpression.cxx',
  'source/xforms/computedexpression.cxx',
  'source/xforms/convert.cxx',
  'source/xforms/datatyperepository.cxx',
  'source/xforms/datatypes.cxx',
  'source/xforms/enumeration.cxx',
  'source/xforms/mip.cxx',
  'source/xforms/model.cxx',
  'source/xforms/model_ui.cxx',
  'source/xforms/pathexpression.cxx',
  'source/xforms/propertysetbase.cxx',
  'source/xforms/resourcehelper.cxx',
  'source/xforms/submission.cxx',
  'source/xforms/submission/replace.cxx',
  'source/xforms/submission/serialization_app_xml.cxx',
  'source/xforms/submission/serialization_urlencoded.cxx',
  'source/xforms/submission/submission_get.cxx',
  'source/xforms/submission/submission_post.cxx',
  'source/xforms/submission/submission_put.cxx',
  'source/xforms/unohelper.cxx',
  'source/xforms/xformsevent.cxx',
  'source/xforms/xforms_services.cxx',
  'source/xforms/xmlhelper.cxx',
  'source/xforms/xpathlib/extension.cxx',
  'source/xforms/xpathlib/xpathlib.cxx',


  udk_fake_h, off_fake_h, oovba_fake_h,
  cpp_args: ['-DLIBO_INTERNAL_ONLY'],
  include_directories: [main_inc, udkh_inc, offapi_inc, oovbaapi_inc, 'inc', 'source/inc', 'source/solar/inc'],
  link_with: [comphelper_lib,
    cppu_lib,
    cppuhelper_lib,
    dbtools_lib,
    editeng_lib,
    i18nlangtag_lib,
    sal_lib,
    salhelper_lib,
    sfx_lib,
    svl_lib,
    svt_lib,
    svxcore_lib,
    tk_lib,
    tl_lib,
    ucbhelper_lib,
    utl_lib,
    vcl_lib,
  ],
  dependencies: [libxml_dep, icuuc_dep, icu18_dep],
  install: true,
)
