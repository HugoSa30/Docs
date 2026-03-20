/*
 * Program: n42.bin
 * Function: FUN_001a6a2c
 * Entry: 001a6a2c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a6a2c(void)

{
  bgCtr = bgCtr + 1;
  if (B_nachlauf == 0) {
    FUN_00135d50();
    func_0xff26c174(1,750000);
    func_0xff26c4cc(0x1ebd8);
  }
  else {
    FUN_00137300();
    FUN_001372c8();
    FUN_001a12a8();
    FUN_001a3218();
    FUN_001ac87c();
    FUN_00137240();
    FUN_00137338();
    func_0xff26c3e8(0x1f294);
    DAT_003f9b79 = 2;
    _DAT_003fb5d4 = 25000;
    rasfak = 0x80;
    DAT_003f9b78 = 5;
    func_0xff26b4dc(1,25000);
    func_0xff26c174(1,750000);
    func_0xff26c4cc(0x1f090);
  }
  return;
}

