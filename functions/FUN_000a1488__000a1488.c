/*
 * Program: n42.bin
 * Function: FUN_000a1488
 * Entry: 000a1488
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a1488(void)

{
  undefined uVar1;
  
  uVar1 = DAT_003fa18b;
  DAT_003fa18b = ' ';
  _DAT_003fa19e = _DAT_00016cf8;
  do {
    FUN_000a0964();
    func_0x0103a2e8();
  } while (DAT_003fa18b != '!');
  func_0x0103a2e8();
  _DAT_003fa19e = _DAT_00016cfa;
  DAT_003fa18b = uVar1;
  return;
}

