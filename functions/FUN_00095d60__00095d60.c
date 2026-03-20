/*
 * Program: n42.bin
 * Function: FUN_00095d60
 * Entry: 00095d60
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00095d60(undefined param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  
  bVar2 = DAT_003f9efc;
  uVar3 = 1;
  uVar1 = (uint)DAT_003f9efc;
  if (1 < uVar1 + 1) {
    do {
      (&UNK_003fa0a3)[uVar3] = (&UNK_003f9f9e)[uVar3];
      uVar3 = uVar3 + 1 & 0xffff;
    } while (uVar3 < uVar1 + 1);
  }
  _DAT_003f9f64 = &UNK_003fa0a3;
  (&DAT_003fa0a4)[uVar1] = 0x7f;
  (&DAT_003fa0a5)[uVar1] = DAT_003f9f24;
  (&UNK_003fa0a6)[uVar1] = param_1;
  _DAT_003f9f10 = FUN_00095aa8(&DAT_003f9efc,3,&UNK_003fa0a3);
  _DAT_003f9ef2 = bVar2 + 2;
  FUN_00097708(_DAT_003f9f10,_DAT_003f9ef2);
  return;
}

