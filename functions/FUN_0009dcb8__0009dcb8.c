/*
 * Program: n42.bin
 * Function: FUN_0009dcb8
 * Entry: 0009dcb8
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0009dcb8(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  ushort uVar3;
  int iVar4;
  
  iVar4 = 0xec00;
  if (*(int *)(param_1 * 8 + 0xebfc) == 0) {
    uVar3 = *(ushort *)(param_1 * 4 + 0xec00);
    if (0xf < uVar3) {
      puVar2 = (undefined2 *)(param_2 + -0x10);
      do {
        puVar2[8] = 0;
        puVar2[9] = 0;
        puVar2[10] = 0;
        puVar2[0xb] = 0;
        puVar2[0xc] = 0;
        puVar2[0xd] = 0;
        puVar2[0xe] = 0;
        puVar2[0xf] = 0;
        uVar3 = uVar3 - 0x10;
        puVar2 = puVar2 + 8;
      } while (0xf < uVar3);
    }
  }
  else {
    FUN_0009dc1c(param_1);
  }
  if ((*(byte *)(iVar4 + param_1 * 4 + 2) & 2) != 0) {
    uVar1 = FUN_0009d6e4(param_1,param_2);
    *(undefined2 *)(param_2 + -2) = uVar1;
  }
  return;
}

