smslots_hxx = custom_target('smslots',
  input: ['sdi/smslots.sdi'],
  output: ['smslots.hxx'],
  depfile: '@BASENAME@.d',
  command: [svidl_bin,
            '-quiet',
            '-I' + meson.current_source_dir() +  '/sdi',
            '-I' + meson.current_source_dir() + '/inc',
            '-I' + meson.source_root() + '/svx/sdi',
            '-I' + meson.source_root() + '/sfx2/sdi',
            '-I' + meson.source_root() + '/include',
            '-fx' + meson.current_source_dir() + '/sdi/smath.sdi',
            '-fs' + meson.build_root() + '/@OUTPUT@',
            '-fM' + meson.build_root() + '/@DEPFILE@',
            '-fm' + meson.current_build_dir(),
            meson.build_root() + '/@INPUT@'
            ]
)

sm_lib = shared_library('smlo',
  'source/AccessibleSmElement.cxx',
  'source/AccessibleSmElementsControl.cxx',
  'source/ElementsDockingWindow.cxx',
  'source/accessibility.cxx',
  'source/action.cxx',
  'source/caret.cxx',
  'source/cfgitem.cxx',
  'source/cursor.cxx',
  'source/dialog.cxx',
  'source/document.cxx',
  'source/edit.cxx',
  'source/format.cxx',
  'source/mathmlattr.cxx',
  'source/mathmlexport.cxx',
  'source/mathmlimport.cxx',
  'source/mathtype.cxx',
  'source/node.cxx',
  'source/ooxmlexport.cxx',
  'source/ooxmlimport.cxx',
  'source/rtfexport.cxx',
  'source/parse.cxx',
  'source/rect.cxx',
  'source/register.cxx',
  'source/smdll.cxx',
  'source/smmod.cxx',
  'source/symbol.cxx',
  'source/tmpdevice.cxx',
  'source/typemap.cxx',
  'source/uiobject.cxx',
  'source/unodoc.cxx',
  'source/unofilter.cxx',
  'source/unomodel.cxx',
  'source/utility.cxx',
  'source/view.cxx',
  'source/visitors.cxx',
  'source/wordexportbase.cxx',
  smslots_hxx,
  udk_fake_h, off_fake_h, math_hxx,
  cpp_args: ['-DSM_DLLIMPLEMENTATION',
             '-DLIBO_INTERNAL_ONLY'],
  include_directories: [main_inc, udkh_inc, offapi_inc, 'inc', setup_inc, '../oox',],
  link_with: [
        comphelper_lib,
        cppu_lib,
        cppuhelper_lib,
        editeng_lib,
        i18nutil_lib,
        i18nlangtag_lib,
        msfilter_lib,
        oox_lib,
        sal_lib,
        sax_lib,
        sfx_lib,
        sot_lib,
        svl_lib,
        svt_lib,
        svx_lib,
        svxcore_lib,
        tk_lib,
        tl_lib,
        utl_lib,
        vcl_lib,
        xo_lib,
  ],
  dependencies: [],
  gnu_symbol_visibility: 'hidden',
  install: true,
)


smd_lib = shared_library('smdlo',
  'source/smdetect.cxx',
  'source/eqnolefilehdr.cxx',
  udk_fake_h, off_fake_h, math_hxx,
  cpp_args: ['-DLIBO_INTERNAL_ONLY'],
  include_directories: [main_inc, udkh_inc, offapi_inc, 'inc'],
  link_with: [comphelper_lib, cppu_lib, cppuhelper_lib, sal_lib, sfx_lib, sot_lib, tl_lib, utl_lib],
  gnu_symbol_visibility: 'hidden',
  install: true,
)

