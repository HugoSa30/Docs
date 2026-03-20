/*
 * Program: n42.bin
 * Function: FUN_0012a328
 * Entry: 0012a328
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0012a328(int param_1,undefined4 param_2)

{
  func_0xff20c6d4();
  func_0xff20c9d8(0);
  func_0xff20c9d8(1);
  func_0xff20c7c8();
  if (_DAT_003fa158 == 5) {
    func_0xff20ceb8(0);
  }
  else if (_DAT_003fa164 == 5) {
    func_0xff20ceb8(1);
  }
  func_0xff20cca0();
  if (param_1 == 0) {
    if ((_DAT_003fa186 == 0) || (_DAT_003fa186 - 1 < 2)) {
      DAT_003fa178 = 1;
    }
    else {
      DAT_003fa178 = 0;
    }
  }
  else {
    DAT_003fa178 = 0;
  }
  if (_DAT_003fa158 == 5) {
    func_0xff20dd88(0,param_2);
  }
  else if (_DAT_003fa164 == 5) {
    func_0xff20dd88(1,param_2);
  }
  return;
}

