/*
 * Program: n42.bin
 * Function: FUN_0013cd30
 * Entry: 0013cd30
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013cd30(double param_1,undefined *param_2,byte param_3,undefined *param_4,
                 undefined4 param_5,byte param_6,uint param_7)

{
  float fVar1;
  undefined4 uVar2;
  ENUM_005b857e EVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  
  do {
    *(float *)(param_4 + (uint)param_6 * 4) = (float)param_1;
    param_6 = param_6 + 1;
    if (3 < param_6) {
      while( true ) {
        EVar3 = B_zylind;
        param_3 = param_3 + 1;
        if (4 < param_3) {
          bVar5 = 1;
          do {
            uVar2 = _DAT_0001bdc4;
            bVar6 = 0;
            do {
              *(undefined4 *)(&UNK_003fd9c4 + (uint)bVar6 * 4) = uVar2;
              bVar6 = bVar6 + 1;
            } while (bVar6 < 4);
            while( true ) {
              uVar2 = _DAT_0001bdc4;
              bVar5 = bVar5 + 1;
              if (4 < bVar5) {
                *param_2 = 0;
                if (DAT_005b857c != '\0') {
                  DAT_005b857c = '\0';
                }
                return;
              }
              if (bVar5 == 1) break;
              if (bVar5 == 2) {
                bVar6 = 0;
                do {
                  *(undefined4 *)(&UNK_003fd9f4 + (uint)bVar6 * 4) = uVar2;
                  bVar6 = bVar6 + 1;
                } while (bVar6 < 4);
              }
              else if (bVar5 == 3) {
                bVar6 = 0;
                do {
                  *(undefined4 *)(&UNK_003fda24 + (uint)bVar6 * 4) = uVar2;
                  bVar6 = bVar6 + 1;
                } while (bVar6 < 4);
              }
              else if (bVar5 == 4) {
                bVar6 = 0;
                do {
                  *(undefined4 *)(&UNK_003fda54 + (uint)bVar6 * 4) = uVar2;
                  bVar6 = bVar6 + 1;
                } while (bVar6 < 4);
              }
            }
          } while( true );
        }
        if (param_3 == 1) break;
        if (param_3 == 2) {
          bVar5 = 1;
          do {
            if (EVar3 == 0) {
              iVar4 = 3 - (uint)zyl2;
            }
            else {
              iVar4 = 3;
            }
            fVar1 = _DAT_0001bdc8;
            if ((int)(uint)bVar5 <= iVar4) {
              fVar1 = _ALFOF;
            }
            *(float *)(&UNK_003fd934 + (uint)bVar5 * 4) = fVar1;
            bVar5 = bVar5 + 1;
          } while (bVar5 < 4);
        }
        else if (param_3 == 3) {
          bVar5 = 1;
          do {
            if (EVar3 == 0) {
              iVar4 = 3 - (uint)zyl2;
            }
            else {
              iVar4 = 3;
            }
            fVar1 = _DAT_0001bdc8;
            if ((int)(uint)bVar5 <= iVar4) {
              fVar1 = _ALFOF;
            }
            *(float *)(&UNK_003fd964 + (uint)bVar5 * 4) = fVar1;
            bVar5 = bVar5 + 1;
          } while (bVar5 < 4);
        }
        else if (param_3 == 4) {
          bVar5 = 1;
          do {
            if (EVar3 == 0) {
              iVar4 = 3 - (uint)zyl2;
            }
            else {
              iVar4 = 3;
            }
            fVar1 = _DAT_0001bdc8;
            if ((int)(uint)bVar5 <= iVar4) {
              fVar1 = _ALFOF;
            }
            *(float *)(&UNK_003fd994 + (uint)bVar5 * 4) = fVar1;
            bVar5 = bVar5 + 1;
          } while (bVar5 < 4);
        }
      }
      param_6 = 1;
      param_4 = &UNK_003fd904;
      param_7 = (uint)B_zylind;
    }
    if (param_7 == 0) {
      iVar4 = 3 - (uint)zyl2;
    }
    else {
      iVar4 = 3;
    }
    if (iVar4 < (int)(uint)param_6) {
      param_1 = (double)_DAT_0001bdc8;
    }
    else {
      param_1 = (double)_ALFOF;
    }
  } while( true );
}

