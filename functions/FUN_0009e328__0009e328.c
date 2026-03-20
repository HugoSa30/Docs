/*
 * Program: n42.bin
 * Function: FUN_0009e328
 * Entry: 0009e328
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0009e328(int param_1)

{
  char cVar3;
  short *psVar1;
  short *psVar2;
  int iVar4;
  undefined4 uVar5;
  ushort uVar6;
  
  if (param_1 == 0) {
    psVar1 = _DAT_003fa13c;
    if (_DAT_003fa164 == 5) {
      iVar4 = 1;
      psVar2 = _DAT_003fa14c;
    }
    else {
      iVar4 = 2;
      psVar2 = (short *)0x0;
    }
  }
  else {
    if (param_1 != 1) {
      return 0;
    }
    psVar1 = _DAT_003fa14c;
    if (_DAT_003fa158 == 5) {
      iVar4 = 0;
      psVar2 = _DAT_003fa13c;
    }
    else {
      iVar4 = 2;
      psVar2 = (short *)0x0;
    }
  }
  uVar5 = 0;
  uVar6 = 0;
  do {
    if ((*(byte *)((uint)uVar6 * 4 + 0xec02) & 0x40) == 0) {
      uVar5 = FUN_0009da60(iVar4,uVar6,psVar2);
    }
    cVar3 = FUN_0009d4a8(uVar6,psVar1);
    if (cVar3 == '\0') {
      cVar3 = FUN_0009d7c4(uVar6,psVar1,uVar5);
      if ((cVar3 == '\0') || (*psVar1 != -1)) {
        return 0;
      }
    }
    else {
      cVar3 = FUN_0009e0d4(uVar6,psVar1,uVar5,&DAT_003fa138 + param_1 * 0x10);
      if (cVar3 == '\0') {
        return 0;
      }
    }
    psVar1 = (short *)FUN_0009cdd4(uVar6,psVar1);
    if (iVar4 != 2) {
      psVar2 = (short *)FUN_0009cdd4(uVar6,psVar2);
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 == 0);
  return 1;
}

