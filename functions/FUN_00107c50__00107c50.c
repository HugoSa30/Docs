/*
 * Program: n42.bin
 * Function: FUN_00107c50
 * Entry: 00107c50
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_00107c50(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  do {
    iVar1 = (&DAT_005b800c)[uVar2];
    iVar3 = 200;
    *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) & 0xfffffffe;
    do {
      if ((*(uint *)(iVar1 + 8) & 0x80000000) == 0) break;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (iVar3 == 0) {
      return 0x92;
    }
    uVar2 = uVar2 + 1 & 0xffff;
    if (1 < uVar2) {
      FUN_00106d9c();
      uVar2 = 0;
      do {
        *(uint *)(&DAT_005b800c)[uVar2] = *(uint *)(&DAT_005b800c)[uVar2] | 0xff;
        uVar2 = uVar2 + 1 & 0xffff;
      } while (uVar2 < 2);
      DAT_003fb962 = 0;
      return 0;
    }
  } while( true );
}

