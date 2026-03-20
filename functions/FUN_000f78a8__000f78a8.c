/*
 * Program: n42.bin
 * Function: FUN_000f78a8
 * Entry: 000f78a8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000f78a8(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  uint uVar10;
  
  piVar4 = _DAT_003fc5dc;
  if (_DAT_003fc5dc == (int *)0x0) {
    uVar5 = 0;
  }
  else if (((int)(uint)*(ushort *)(*_DAT_003fc5dc + 0x20) >> (*(byte *)(_DAT_003fc5dc + 3) & 0x3f) &
           1U) == 0) {
    uVar5 = 0;
  }
  else {
    *(ushort *)(*_DAT_003fc5dc + 0x20) = ~(ushort)(1 << (*(byte *)(_DAT_003fc5dc + 3) & 0x3f));
    puVar9 = (ushort *)piVar4[2];
    uVar1 = *puVar9;
    uVar2 = uVar1 >> 9;
    if (uVar2 == 0) {
      uVar10 = uVar1 >> 1 & 7;
      uVar2 = puVar9[1];
      uVar3 = (uint)(uVar2 >> 2);
      uVar8 = uVar3 & 0xff;
      uVar7 = uVar2 >> 1 & 1;
      if (_DAT_003fc5e0 == 4) {
        cVar6 = (*(code *)&SUB_00067530)(uVar1 >> 5 & 7,uVar10,uVar8);
        if (cVar6 == '\0') {
          (*(code *)&SUB_00fafd30)
                    (0x32,(uint)*puVar9 + (uint)uVar2 * 0x10000,DAT_003fc660,DAT_003fc663);
          _DAT_003fc5e0 = 2;
        }
        else {
          if (DAT_003fc663 == 0xfc) {
            _DAT_003fc5e0 = 5;
            if (*(code **)(_DAT_003fc5d8 + 0x10) != (code *)0x0) {
              (**(code **)(_DAT_003fc5d8 + 0x10))(9,1,0,0);
            }
          }
          _DAT_003fc664 = 0;
          (*(code *)&SUB_00067620)();
        }
      }
      else if (_DAT_003fc5e0 == 5) {
        if ((uVar2 & 1) == 1) {
          (*(code *)&SUB_00fafd30)
                    (0x33,(uint)uVar1 + (uint)uVar2 * 0x10000,DAT_003fc660,DAT_003fc663);
          _DAT_003fc664 = 0;
          (*(code *)&SUB_00067620)();
        }
        else {
          if (_DAT_003fc664 == 1) {
            if ((*(int *)(&DAT_0001ff38 + (uVar3 & 0xf) * 4) +
                 *(int *)(&DAT_0001ff38 + ((uVar3 & 0xf0) >> 4) * 4) & 1U) == uVar7) {
              if (DAT_003fc662 == uVar8) {
                if (*(code **)(_DAT_003fc5d8 + 0x10) != (code *)0x0) {
                  (**(code **)(_DAT_003fc5d8 + 0x10))
                            (9,3,DAT_003fc663,(uint)DAT_003fc660 << 0x18 | uVar10 << 0x10);
                }
              }
              else {
                (*(code *)&SUB_00fafd30)(0x36,uVar8,DAT_003fc660,DAT_003fc663);
              }
            }
            else {
              (*(code *)&SUB_00fafd30)(0x35,uVar10 + uVar8 * 0x10000,DAT_003fc660,DAT_003fc663);
            }
          }
          else if (_DAT_003fc664 == 2) {
            if ((*(int *)(&DAT_0001ff38 + (uVar3 & 0xf) * 4) +
                 *(int *)(&DAT_0001ff38 + ((uVar3 & 0xf0) >> 4) * 4) & 1U) == uVar7) {
              if (*(code **)(_DAT_003fc5d8 + 0x10) != (code *)0x0) {
                (**(code **)(_DAT_003fc5d8 + 0x10))
                          (9,2,uVar8,
                           (uint)DAT_003fc660 << 0x18 | uVar10 << 0x10 | (uint)DAT_003fc663);
              }
            }
            else {
              (*(code *)&SUB_00fafd30)(0x35,uVar10 + uVar8 * 0x10000,DAT_003fc660,DAT_003fc663);
            }
          }
          _DAT_003fc664 = 0;
          (*(code *)&SUB_00067620)();
        }
      }
      uVar5 = 1;
    }
    else {
      _DAT_003fc66c = uVar2;
      if (uVar2 == 7) {
        if (_DAT_003fc5e0 == 3) {
          if ((*(char **)(_DAT_003fc5d8 + 8) == (char *)0x0) ||
             (**(char **)(_DAT_003fc5d8 + 8) == '\0')) {
            _DAT_003fc5e0 = 5;
            if (*(code **)(_DAT_003fc5d8 + 0x10) != (code *)0x0) {
              (**(code **)(_DAT_003fc5d8 + 0x10))(9,1,0,0);
            }
          }
          else {
            _DAT_003fc5e0 = 4;
          }
        }
        _DAT_003fc664 = 0;
        (*(code *)&SUB_00067620)();
        uVar5 = 1;
      }
      else {
        (*(code *)&SUB_00fafd30)
                  (uVar2,(uint)*puVar9 + (uint)puVar9[1] * 0x10000,DAT_003fc660,DAT_003fc663);
        _DAT_003fc664 = 0;
        (*(code *)&SUB_00067620)();
        uVar5 = 1;
      }
    }
  }
  return uVar5;
}

