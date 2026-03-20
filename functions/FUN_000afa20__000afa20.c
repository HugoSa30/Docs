/*
 * Program: n42.bin
 * Function: FUN_000afa20
 * Entry: 000afa20
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000afa20(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  
  uVar8 = FUN_000afde8();
  uVar7 = (uint)(uVar8 >> 0x20);
  uVar3 = (uint)uVar8;
  if ((param_3 & (param_3 - 1) + (uint)(param_4 != 0) | param_4 & param_4 - 1) == 0) {
    uVar3 = param_3;
    if (param_4 == 0) {
      uVar8 = (ulonglong)uVar7;
      uVar3 = 0;
      param_4 = param_3;
    }
    param_3 = uVar3;
    uVar7 = param_4;
    if ((param_4 & 0xffff) == 0) {
      uVar7 = param_4 >> 0x10;
      uVar8 = uVar8 >> 0x10;
    }
    uVar9 = uVar8;
    if ((uVar7 & 0xff) == 0) {
      uVar7 = uVar7 >> 8;
      uVar9 = uVar8 >> 8;
    }
    while (uVar7 = uVar7 >> 1, uVar7 != 0) {
      uVar9 = uVar9 >> 1;
    }
  }
  else {
    uVar5 = uVar7 | param_3;
    if (uVar5 == 0) {
      uVar9 = (ulonglong)(uVar3 / param_4);
    }
    else {
      uVar6 = 0xff000000;
      if ((((uVar5 & 0xff000000) == 0) && (uVar6 = 0xffff0000, (uVar5 & 0xffff0000) == 0)) &&
         (uVar6 = 0xffffff00, (uVar5 & 0xffffff00) == 0)) {
        uVar6 = 0xffffffff;
      }
      iVar4 = 0;
      for (; (param_3 & uVar6) == 0; param_3 = uVar5 | param_3 << 8) {
        uVar5 = param_4 >> 0x18;
        param_4 = param_4 << 8;
        iVar4 = iVar4 + 8;
      }
      uVar5 = param_3;
      if ((uVar8 & 0x8000000000000000) == 0) {
        bVar2 = uVar7 < param_3;
        if (param_3 == uVar7) {
          bVar2 = uVar3 < param_4;
        }
        while (!bVar2) {
          param_3 = param_4 >> 0x1f | param_3 << 1;
          bVar2 = uVar7 < param_3;
          param_4 = param_4 << 1;
          iVar4 = iVar4 + 1;
          if (param_3 == uVar7) {
            bVar2 = uVar3 < param_4;
          }
        }
        uVar5 = 0;
      }
      else {
        while ((uVar5 & 0x80000000) == 0) {
          uVar5 = param_3 << 1;
          param_3 = param_4 >> 0x1f | uVar5;
          param_4 = param_4 << 1;
          iVar4 = iVar4 + 1;
        }
        bVar2 = uVar7 < param_3;
        uVar5 = 0;
        if (uVar7 == param_3) {
          bVar2 = uVar3 < param_4;
        }
        if (!bVar2) {
          uVar8 = CONCAT44(uVar7 - (param_3 + (uVar3 < param_4)),uVar3 - param_4);
          uVar5 = 1;
        }
      }
      uVar7 = 0;
      while( true ) {
        uVar9 = CONCAT44(uVar7,uVar5);
        uVar3 = (uint)(uVar8 >> 0x20);
        uVar6 = (uint)uVar8;
        if (iVar4 == 0) break;
        param_4 = param_3 << 0x1f | param_4 >> 1;
        param_3 = param_3 >> 1;
        bVar2 = uVar3 < param_3;
        uVar7 = uVar5 >> 0x1f | uVar7 << 1;
        uVar5 = uVar5 << 1;
        if (uVar3 == param_3) {
          bVar2 = uVar6 < param_4;
        }
        if (!bVar2) {
          uVar5 = uVar5 | 1;
          uVar8 = CONCAT44(uVar3 - (param_3 + (uVar6 < param_4)),uVar6 - param_4);
        }
        iVar4 = iVar4 + -1;
      }
    }
  }
  FUN_000afe3c((int)(uVar9 >> 0x20),(int)uVar9);
  uVar9 = FUN_000afde8();
  uVar7 = (uint)(uVar9 >> 0x20);
  bVar2 = 0x7fffffff < uVar7;
  uVar8 = uVar9;
  if (bVar2) {
    uVar8 = CONCAT44(-(((int)uVar9 != 0) + uVar7),-(int)uVar9);
  }
  bVar1 = 0 < (int)param_3;
  if (param_3 == 0) {
    bVar1 = param_4 != 0;
  }
  if (!bVar1) {
    if ((param_3 | param_4) == 0) {
      if (uVar9 < 0x8000000000000000) {
        uVar10 = 0x7fffffffffffffff;
      }
      else {
        uVar10 = 0x8000000000000000;
      }
      goto LAB_000afd54;
    }
    bVar2 = param_4 != 0;
    param_4 = -param_4;
    param_3 = -(bVar2 + param_3);
    bVar2 = uVar7 < 0x80000000;
  }
  uVar10 = FUN_000afa20((int)(uVar8 >> 0x20),(int)uVar8);
  if (bVar2) {
    uVar10 = CONCAT44(-((uint)((int)uVar10 != 0) + (int)((ulonglong)uVar10 >> 0x20)),-(int)uVar10);
  }
LAB_000afd54:
  FUN_000afe3c((int)((ulonglong)uVar10 >> 0x20),(int)uVar10);
  if ((param_3 | param_4) != 0) {
    FUN_000afa20();
  }
  return;
}

