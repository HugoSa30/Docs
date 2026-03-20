/*
 * Program: n42.bin
 * Function: FUN_0009ce30
 * Entry: 0009ce30
 * Exported by: ExportAllDecompiledFunctions.java
 */


ushort * FUN_0009ce30(int param_1,ushort *param_2,ushort *param_3)

{
  ushort *puVar1;
  uint uVar2;
  ushort *puVar3;
  
  puVar3 = (ushort *)0x0;
  while( true ) {
    puVar1 = param_2;
    if (param_3 <= puVar1) {
      return puVar3;
    }
    if ((uint)puVar1[2] != (param_1 + ~((uint)puVar1[1] + (uint)puVar1[3]) & 0xffff)) {
      (&UNK_003fa134)[param_1] = (&UNK_003fa134)[param_1] | 0x20;
      return puVar3;
    }
    uVar2 = (uint)*puVar1;
    if (uVar2 == 0xffff) {
      return puVar1;
    }
    if (uVar2 == 0) break;
    param_2 = puVar1 + uVar2;
    puVar3 = puVar1;
  }
  return puVar1;
}

