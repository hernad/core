store_lib = shared_library('storelo',
  'source/lockbyte.cxx',
  'source/object.cxx',
  'source/storbase.cxx',
  'source/storbios.cxx',
  'source/storcach.cxx',
  'source/stordata.cxx',
  'source/stordir.cxx',
  'source/store.cxx',
  'source/storlckb.cxx',
  'source/storpage.cxx',
  'source/stortree.cxx',
  include_directories: [main_inc],
  cpp_args: ['-DLIBO_INTERNAL_ONLY'],
  link_with: [salhelper_lib, sal_lib],
  install: true,
)

