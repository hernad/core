localebe_lib = shared_library('localebe1lo',
  'source/backends/localebe/localebackend.cxx',
  'source/backends/localebe/localebecdef.cxx',
  udk_fake_h, off_fake_h,
  cpp_args: ['-DLIBO_INTERNAL_ONLY'],
  include_directories: [main_inc, udkh_inc, offapi_inc, 'inc'],
  link_with: [cppu_lib,
    cppuhelper_lib,
    sal_lib,
    i18nlangtag_lib,
  ],
  dependencies: [],
  gnu_symbol_visibility: 'hidden',
  install: true,
)

desktopbe_lib = shared_library('desktopbe1lo',
  'source/backends/desktopbe/desktopbackend.cxx',
  udk_fake_h, off_fake_h,
  cpp_args: ['-DLIBO_INTERNAL_ONLY'],
  include_directories: [main_inc, udkh_inc, offapi_inc, 'inc'],
  link_with: [cppu_lib,
     cppuhelper_lib,
     sal_lib,
     tl_lib,
     vcl_lib,
   ],
  dependencies: [],
  gnu_symbol_visibility: 'hidden',
  install: true,
)
