/*
 * Program: n42.bin
 * Function: FUN_000d2c14
 * Entry: 000d2c14
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d2c14(int param_1,ushort param_2)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  ushort *puVar5;
  
  puVar5 = *(ushort **)(param_1 + 0x10);
  uVar2 = (uint)Vnsfaktvub * (uint)*puVar5 >> 7;
  if (uVar2 < 0x2711) {
    *puVar5 = (ushort)uVar2;
  }
  else {
    *puVar5 = 10000;
  }
  if ((**(byte **)(param_1 + 0x24) & 2) == 0) {
    uVar4 = *puVar5;
  }
  else {
    if (**(char **)(param_1 + 0x50) == '\0') {
      sVar1 = **(short **)(param_1 + 0x60);
    }
    else {
      sVar1 = **(short **)(param_1 + 0x5c);
    }
    uVar4 = FUN_000b54d0(sVar1 * 5000 >> 0xe);
    *puVar5 = uVar4;
    uVar4 = **(ushort **)(param_1 + 0x10);
  }
  iVar3 = (uint)*(byte *)(param_1 + 0x74) * 2;
  if ((((**(ushort **)(param_1 + 0x30) < *(ushort *)(&SPRZG_AN + iVar3)) &&
       ((int)((uint)*(ushort *)(&SPRZG_AN + iVar3) - (uint)VNSKRITLOC) <
        (int)(uint)**(ushort **)(param_1 + 0x2c))) && (nmot < VNSNMOTAN)) &&
     (((uint)CW_VNSDYN & 1 << (*(byte *)(param_1 + 0x74) & 0x3f)) != 0)) {
    if ((**(byte **)(param_1 + 0x24) & 8) == 0) {
      param_2 = FUN_000b54d0((int)(((uint)**(ushort **)(param_1 + 0x40) - (uint)_VNSTVIABDY) * 5000)
                             >> 0xe);
    }
    **(byte **)(param_1 + 0x24) = **(byte **)(param_1 + 0x24) | 8;
    if ((int)(uint)_VNS_DYN < (int)((uint)uVar4 - (uint)param_2)) {
      uVar4 = param_2 + _VNS_DYN;
      **(ushort **)(param_1 + 0x10) = uVar4;
    }
    else if ((int)((uint)uVar4 - (uint)param_2) < (int)-(uint)_VNS_DYN) {
      uVar4 = param_2 - _VNS_DYN;
      **(ushort **)(param_1 + 0x10) = uVar4;
    }
  }
  else {
    **(byte **)(param_1 + 0x24) = **(byte **)(param_1 + 0x24) & 0xf7;
  }
  FUN_000e2e60(*(undefined *)(param_1 + 0x74),(int)(short)uVar4);
  return;
}

