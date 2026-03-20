/*
 * Program: n42.bin
 * Function: FUN_0009dc1c
 * Entry: 0009dc1c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0009dc1c(int param_1,int param_2,int param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  ushort uVar3;
  
  if ((*(byte *)(param_1 * 4 + 0xec02) & 2) != 0) {
    *(undefined2 *)(param_2 + -2) = *(undefined2 *)(param_3 + -2);
  }
  uVar3 = *(ushort *)(param_1 * 4 + 0xec00);
  if (0xf < uVar3) {
    puVar1 = (undefined2 *)(param_2 + -0x10);
    puVar2 = (undefined2 *)(param_3 + -0x10);
    do {
      puVar1[8] = puVar2[8];
      puVar1[9] = puVar2[9];
      puVar1[10] = puVar2[10];
      puVar1[0xb] = puVar2[0xb];
      puVar1[0xc] = puVar2[0xc];
      puVar1[0xd] = puVar2[0xd];
      puVar1[0xe] = puVar2[0xe];
      puVar1[0xf] = puVar2[0xf];
      uVar3 = uVar3 - 0x10;
      puVar1 = puVar1 + 8;
      puVar2 = puVar2 + 8;
    } while (0xf < uVar3);
  }
  return;
}

