/*
 * Program: n42.bin
 * Function: FUN_00123db8
 * Entry: 00123db8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00123db8(void)

{
  undefined4 uVar1;
  
  if (_DAT_003fa158 == 5) {
    func_0xff22126c(_DAT_003fa148,0xa5a5);
    func_0xff20d00c(1);
    func_0xff22126c(_DAT_003fa138,0xa5a5);
    func_0xff20d00c(0);
  }
  else {
    func_0xff22126c(_DAT_003fa138,0xa5a5);
    func_0xff20d00c(0);
    func_0xff22126c(_DAT_003fa148,0xa5a5);
    func_0xff20d00c(1);
  }
  if ((_DAT_003fa158 == 1) && (_DAT_003fa164 == 1)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

