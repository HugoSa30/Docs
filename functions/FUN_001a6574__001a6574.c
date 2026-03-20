/*
 * Program: n42.bin
 * Function: FUN_001a6574
 * Entry: 001a6574
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a6574(void)

{
  bg_predrive_Ctr = bg_predrive_Ctr + 1;
  if (B_norm == 0) {
    FUN_00135d50();
    func_0xff26c174(1,750000);
    func_0xff26c4cc(0x1e56c);
  }
  else {
    func_0xff26c3e8(0x1f2c0);
    DAT_003f9b79 = 0;
    _DAT_003fb5d4 = 25000;
    rasfak = 0x80;
    DAT_003f9b78 = 5;
    func_0xff26b4dc(1,25000);
    func_0xff26c174(1,750000);
    func_0xff26c4cc(0x1ebd8);
  }
  return;
}

