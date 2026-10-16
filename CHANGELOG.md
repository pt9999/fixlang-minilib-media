## 0.8.0
### Changed
- fixproj.toml: Bumped `fix_version` to 1.6.0. Depends on minilib-common@0.15.0,
  minilib-xml@0.8.0, minilib-io@0.10.0, math@2.0.1.
  math@2.0.1 is moved from `dependencies` to `test_dependencies`.
- Minilib.Media.Png: Changed `_PNG_FORMAT_FLAG_ALPHA` to `__PNG_FORMAT_FLAG_ALPHA` etc.
- Reorganized imports using `fix edit explicit-import`.

## 0.7.2
### Fixed
- Merged PR#3 (thanks to tttmmmyyyy san).
  - Fixed a buffer-overflow in `PngImageIO::write_to_memory`.

## 0.7.1
### Changed
- Added indirect dependencies.
- Upgraded to minilib-io@0.9.2.

## 0.7.0
### Changed
- Merged PR#2 (thanks to tttmmmyyyy san).
  - Migrate to the unboxed-Array standard library.
  - fixproj.toml: Bumped `fix_version` to 1.5.0.
  - Upgraded to math@2.0.0.
- Upgraded to minilib-io@0.9.0, minilib-xml@0.7.0.

## 0.6.4
### Changed
- Upgraded to minilib-io@0.8.5, minilib-xml@0.6.4, math@1.2.1.
- Modified some code to remove the deprecation warnings.

## 0.6.2
### Changed
- Removed indirect dependencies.

## 0.6.1
### Fixed
- Fixed a potential dangling pointer. (`unsafe_from_c_str_ptr` -> `unsafe_from_c_str_ptr_io`)

## 0.6.0
### Changed
- fixproj.toml:
  - Bumped `fix_version` to 1.3.0.
  - Depends on minilib-common@0.12.0, minilib-xml@0.6.0.
  - Moved minilib-io to test_dependencies.

## 0.5.7
### Changed
- adopt change of type of Destructor::make
