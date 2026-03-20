/*
 * Program: n42.bin
 * Function: FUN_000e4500
 * Entry: 000e4500
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e4500(void)

{
  byte bVar1;
  ushort uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  
  uVar5 = 0;
  do {
    iVar4 = uVar5 * 0x78;
    uVar8 = (uint)*(byte *)(iVar4 + 0x1f880);
    if ((DEAVANOS & 1) == 0) {
      (&DAT_005b8ee4)[uVar8] = 0;
    }
    else if ((VNS_NMOTS < nmot) && ((**(byte **)(iVar4 + 0x1f830) & 0x20) == 0)) {
      if ((&DAT_005b8ee4)[uVar8] != -1) {
        (&DAT_005b8ee4)[uVar8] = (&DAT_005b8ee4)[uVar8] + '\x01';
      }
    }
    else {
      (&DAT_005b8ee4)[uVar8] = 0;
    }
    if (((&DAT_005b8eec)[uVar8] & 1) == 0) {
      if ((DEAVANOS & 2) == 0) {
        (&DAT_005b8eec)[uVar8] = (&DAT_005b8eec)[uVar8] & 0xfd;
      }
      else if ((**(byte **)(iVar4 + 0x1f830) & 0x20) != 0) {
        iVar9 = uVar8 * 2;
        if ((*(ushort *)(&DAT_001cb6ee + iVar9) < *(ushort *)(&DAT_005b8bb8 + iVar9)) ||
           (*(ushort *)(&DAT_005b8bb8 + iVar9) < *(ushort *)(&DAT_001cb6e6 + iVar9))) {
          (&DAT_005b8eec)[uVar8] = (&DAT_005b8eec)[uVar8] | 0x82;
        }
        else {
          (&DAT_005b8eec)[uVar8] = (&DAT_005b8eec)[uVar8] & 0xfd;
        }
      }
      if (((&DAT_005b8eec)[uVar8] & 2) == 0) {
        if ((DEAVANOS & 4) == 0) {
          (&DAT_005b8eec)[uVar8] = (&DAT_005b8eec)[uVar8] & 0xef;
        }
        else if ((**(byte **)(iVar4 + 0x1f830) & 0x40) != 0) {
          if ((*(ushort *)(&NW_ADP_MX + uVar5 * 2) < **(ushort **)(iVar4 + 0x1f810)) ||
             (**(ushort **)(iVar4 + 0x1f810) < *(ushort *)(&NW_ADP_MN + uVar5 * 2))) {
            (&DAT_005b8eec)[uVar8] = (&DAT_005b8eec)[uVar8] | 0x90;
          }
          else {
            (&DAT_005b8eec)[uVar8] = (&DAT_005b8eec)[uVar8] & 0xef;
          }
        }
        if (((**(ushort **)(iVar4 + 0x1f83c) < *(ushort *)(&SPRZG_AN + uVar5 * 2)) &&
            (((&DAT_005b8eec)[uVar8] & 0x10) == 0)) && ((**(byte **)(iVar4 + 0x1f830) & 0x10) == 0))
        {
          if ((DEAVANOS & 8) == 0) {
            (&DAT_005b8eec)[uVar8] = (&DAT_005b8eec)[uVar8] & 0xf7;
          }
          else {
            uVar3 = FUN_000b2514(&UNK_003fb77c + uVar8 * 4,**(undefined2 **)(iVar4 + 0x1f84c),
                                 _VNSK_TV_I);
            *(undefined2 *)(&DAT_005b9b7c + uVar8 * 2) = uVar3;
            uVar8 = (uint)*(byte *)(iVar4 + 0x1f880);
            if ((_VNS_TVIMX < *(ushort *)(&DAT_005b9b7c + uVar8 * 2)) ||
               (*(ushort *)(&DAT_005b9b7c + uVar8 * 2) < _VNS_TVIMN)) {
              (&DAT_005b8eec)[uVar8] = (&DAT_005b8eec)[uVar8] | 0x88;
            }
            else {
              (&DAT_005b8eec)[uVar8] = (&DAT_005b8eec)[uVar8] & 0xf7;
            }
          }
          uVar2 = **(ushort **)(iVar4 + 0x1f824);
          if (uVar2 < 0x8001) {
            sVar7 = -(uVar2 + 0x8000);
          }
          else {
            sVar7 = uVar2 + 0x8000;
          }
          if ((DEAVANOS & 0x10) == 0) {
            (&DAT_005b8eec)[*(byte *)(iVar4 + 0x1f880)] =
                 (&DAT_005b8eec)[*(byte *)(iVar4 + 0x1f880)] & 0xfb;
          }
          else if ((**(byte **)(iVar4 + 0x1f830) & 0x20) != 0) {
            bVar1 = *(byte *)(iVar4 + 0x1f880);
            uVar3 = FUN_000b2514(&UNK_003fb78c + (uint)bVar1 * 4,sVar7,_VNSK_DELTA);
            *(undefined2 *)(&DAT_005b9b74 + (uint)bVar1 * 2) = uVar3;
            uVar8 = (uint)*(byte *)(iVar4 + 0x1f880);
            if (_VNS_DELTMX < *(ushort *)(&DAT_005b9b74 + uVar8 * 2)) {
              (&DAT_005b8eec)[uVar8] = (&DAT_005b8eec)[uVar8] | 0x84;
            }
            else {
              (&DAT_005b8eec)[uVar8] = (&DAT_005b8eec)[uVar8] & 0xfb;
            }
          }
          if ((DEAVANOS & 0x20) == 0) {
            (&DAT_005b8eec)[*(byte *)(iVar4 + 0x1f880)] =
                 (&DAT_005b8eec)[*(byte *)(iVar4 + 0x1f880)] & 0xfb;
          }
          else if ((**(byte **)(iVar4 + 0x1f830) & 0x20) != 0) {
            if (**(ushort **)(iVar4 + 0x1f824) < 0x8001) {
              iVar9 = 0xff;
            }
            else {
              iVar9 = 1;
            }
            if (**(ushort **)(iVar4 + 0x1f828) < 0x8001) {
              iVar6 = 0xff;
            }
            else {
              iVar6 = 1;
            }
            if (iVar9 == iVar6) {
              if ((int)(uint)_VNS_DELTMX2 < (int)sVar7) {
                if ((&DAT_005b8ee8)[*(byte *)(iVar4 + 0x1f880)] != -1) {
                  (&DAT_005b8ee8)[*(byte *)(iVar4 + 0x1f880)] =
                       (&DAT_005b8ee8)[*(byte *)(iVar4 + 0x1f880)] + '\x01';
                }
              }
              else {
                (&DAT_005b8ee8)[*(byte *)(iVar4 + 0x1f880)] = 0;
              }
            }
            else {
              (&DAT_005b8ee8)[*(byte *)(iVar4 + 0x1f880)] = 0;
            }
          }
        }
      }
    }
    uVar5 = uVar5 + 1 & 0xff;
  } while (uVar5 < 2);
  return;
}

