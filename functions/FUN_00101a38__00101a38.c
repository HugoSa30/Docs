/*
 * Program: n42.bin
 * Function: FUN_00101a38
 * Entry: 00101a38
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00101a38(undefined4 param_1,int *param_2)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  undefined uVar7;
  
  cVar1 = *(char *)(param_2 + 3);
  sVar4 = *(short *)((int)param_2 + 6);
  bVar2 = ((undefined *)*param_2)[1];
  if (((sVar4 == 1) || (sVar4 == 2)) || (sVar4 == 5)) {
    if ((cVar1 == -0x7b) && (bVar2 == 0x14)) {
      if (nmot_w == 0) {
        _DAT_003fffe8 = 0xbb44e169;
        *(undefined *)*param_2 = 0x85;
        *(undefined *)(*param_2 + 1) = 0x14;
        *(undefined2 *)(param_2 + 2) = 2;
        uVar7 = 1;
        goto LAB_00101db0;
      }
      _DAT_003fffe8 = 0;
      uVar7 = 0x10;
      goto LAB_00101d9c;
    }
    _DAT_003fffe8 = 0;
    DAT_003fffcf = 0;
    DAT_003fffbc = 0;
    if ((nmot_w != 0) ||
       ((iVar5 = FUN_001012ac(), 0x146 < iVar5 && (iVar5 = FUN_001012ac(), iVar5 != 0xf000)))) {
      uVar7 = 0x22;
      goto LAB_00101d9c;
    }
    uVar6 = 0;
    cVar3 = DAT_00f0236c;
    while (cVar3 != cVar1) {
      uVar6 = uVar6 + 1 & 0xff;
      if (5 < uVar6) {
        *(undefined *)*param_2 = 0x12;
        *(undefined2 *)(param_2 + 2) = 1;
        uVar7 = 2;
        goto LAB_00101db0;
      }
      cVar3 = (&DAT_00f0236c)[uVar6];
    }
    if (cVar1 != -0x7b) {
      DAT_003fffa5 = 0x81;
      FUN_0010c7ec(0x81);
LAB_00101c58:
      uVar7 = 0x12;
      goto LAB_00101d9c;
    }
    if ((DAT_003fffa6 != uVar6) || (DAT_003fbd5d != '\0')) {
      uVar7 = 0x33;
      goto LAB_00101d9c;
    }
    DAT_003fffa5 = 0x85;
    FUN_0010c7ec(0x85);
    _DAT_003fff80 = 0xaabffb11;
    if (sVar4 != 1) {
      if (bVar2 < 5) {
        if (bVar2 == 4) {
          iVar5 = 0xe100;
        }
        else if (bVar2 == 1) {
          iVar5 = 0x2580;
        }
        else if (bVar2 == 2) {
          iVar5 = 0x4b00;
        }
        else {
          if (bVar2 != 3) goto LAB_00101c58;
          iVar5 = 0x9600;
        }
      }
      else if (bVar2 == 5) {
        iVar5 = 0x1c200;
      }
      else {
        if (bVar2 != 6) goto LAB_00101c58;
        iVar5 = *param_2;
        iVar5 = (uint)*(byte *)(iVar5 + 2) * 0x10000 + (uint)*(byte *)(iVar5 + 3) * 0x100 +
                (uint)*(byte *)(iVar5 + 4);
      }
      iVar5 = (**(code **)(_DAT_003fbd60 + 0xc))(iVar5);
      if (iVar5 == 0) {
        (**(code **)(_DAT_003fbd60 + 0x10))();
        _DAT_003fffd4 = _DAT_003fffd4 | 0x916;
        if (_DAT_003ffff0 != 2) {
          DAT_003fffbd = 0x50;
          DAT_003fffc7 = 3;
          if (bVar2 == 6) {
            DAT_003fffc0 = *(undefined *)(*param_2 + 2);
            DAT_003fffc1 = *(undefined *)(*param_2 + 3);
            DAT_003fffc2 = *(undefined *)(*param_2 + 4);
            DAT_003fffc7 = 6;
          }
          DAT_003fffbe = cVar1;
          DAT_003fffbf = bVar2;
          FUN_001019ec();
          return;
        }
        *(undefined2 *)(param_2 + 2) = 2;
        *(undefined *)((int)param_2 + 10) = 1;
        if (bVar2 != 6) {
          return;
        }
        *(undefined2 *)(param_2 + 2) = 5;
        return;
      }
      uVar7 = 0x31;
      goto LAB_00101d9c;
    }
    _DAT_003fffd4 = _DAT_003fffd4 | 0x916;
    if (_DAT_003ffff0 != 2) {
      DAT_003fffbd = 0x50;
      DAT_003fffc7 = 2;
      DAT_003fffbe = cVar1;
      FUN_001019ec();
      return;
    }
    uVar7 = 1;
  }
  else {
    uVar7 = 0x12;
LAB_00101d9c:
    *(undefined *)*param_2 = uVar7;
    uVar7 = 2;
  }
  *(undefined2 *)(param_2 + 2) = 1;
LAB_00101db0:
  *(undefined *)((int)param_2 + 10) = uVar7;
  return;
}

