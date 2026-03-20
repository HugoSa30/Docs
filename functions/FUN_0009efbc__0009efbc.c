/*
 * Program: n42.bin
 * Function: FUN_0009efbc
 * Entry: 0009efbc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_0009efbc(int param_1,short *param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  char cVar4;
  short sVar3;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  
  cVar4 = DAT_003fa1b0;
  if (DAT_003f9a48 < 0x43) {
    if (DAT_003f9a48 == 0x42) {
      bVar6 = 3;
      uVar1 = *(ushort *)(&DAT_00016c7e + param_1 * 10);
      if ((uVar1 & 3) == 0) {
        if (DAT_003fa195 == '\0') {
          DAT_003fa1b1 = DAT_003fa1b1 | 0x20;
        }
        else {
          DAT_003fa1b1 = DAT_003fa1b1 & 0xdf;
          bVar6 = 0;
        }
LAB_0009f810:
        if (bVar6 != 3) {
          bVar5 = DAT_003fa1b1 & 0xfc;
          DAT_003fa1b1 = bVar5 | bVar6 & 3;
          if (DAT_003fa1ac == bVar6) {
            DAT_003fa1ae = '\x01';
            if ((((int)(uint)uVar1 >> 7 & 1U) != 0) &&
               (*param_2 != *(short *)(_DAT_00016cec + (uint)*(ushort *)(param_1 * 10 + 0x16c7c))))
            {
              DAT_003fa1b1 = bVar5 | 0x23;
              DAT_003fa1ae = -0x80;
            }
          }
          else {
            DAT_003fa1ad = 0x42;
            DAT_003f9a48 = 0x43;
            DAT_003fa1ac = bVar6;
          }
          goto LAB_0009f910;
        }
      }
      else {
        if ((uVar1 & 3) == 1) {
          if ((DAT_003fa195 == '\0') || (DAT_003fa196 == '\0')) {
            DAT_003fa1b1 = DAT_003fa1b1 | 0x20;
            if (DAT_003fa195 == '\0') {
              if (DAT_003fa196 != '\0') {
                bVar6 = 1;
              }
            }
            else {
              bVar6 = 0;
            }
          }
          else if (_DAT_003fa18c == _DAT_003fa18e) {
            DAT_003fa1b1 = DAT_003fa1b1 & 0xdf;
            bVar6 = DAT_003fa1ac;
          }
          else {
            DAT_003fa1b1 = DAT_003fa1b1 | 0x20;
            sVar3 = (ushort)DAT_003fa192 - (ushort)DAT_003fa193;
            if (sVar3 < -0x7f) {
              sVar3 = sVar3 + 0xff;
            }
            else if (0x7f < sVar3) {
              sVar3 = sVar3 + -0xff;
            }
            if (sVar3 < 0) {
              bVar6 = 1;
            }
            else {
              bVar6 = 0;
            }
          }
          goto LAB_0009f810;
        }
        if ((uVar1 & 3) == 2) {
          if (((DAT_003fa195 == '\0') || (DAT_003fa196 == '\0')) || (DAT_003fa197 == '\0')) {
            DAT_003fa1b1 = DAT_003fa1b1 | 0x20;
            if (DAT_003fa195 == '\0') {
LAB_0009f738:
              if ((DAT_003fa196 == '\0') || (DAT_003fa197 == '\0')) {
                if (DAT_003fa195 == '\0') {
                  if (DAT_003fa196 == '\0') {
                    if (DAT_003fa197 != '\0') {
                      bVar6 = 2;
                    }
                  }
                  else {
                    bVar6 = 1;
                  }
                }
                else {
                  bVar6 = 0;
                }
              }
              else if (_DAT_003fa18e == _DAT_003fa190) {
                bVar6 = DAT_003fa1ac;
                if ((DAT_003fa1ac != 1) && (DAT_003fa1ac != 2)) {
                  bVar6 = 1;
                }
              }
              else {
                sVar3 = (ushort)DAT_003fa193 - (ushort)DAT_003fa194;
                if (sVar3 < -0x7f) {
                  sVar3 = sVar3 + 0xff;
                }
                else if (0x7f < sVar3) {
                  sVar3 = sVar3 + -0xff;
                }
                if (sVar3 < 0) {
                  bVar6 = 2;
                }
                else {
                  bVar6 = 1;
                }
              }
            }
            else if (DAT_003fa196 == '\0') {
              if ((DAT_003fa195 == '\0') || (DAT_003fa197 == '\0')) goto LAB_0009f738;
              if (_DAT_003fa18c == _DAT_003fa190) {
                bVar6 = DAT_003fa1ac;
                if ((DAT_003fa1ac != 0) && (DAT_003fa1ac != 2)) {
                  bVar6 = 0;
                }
              }
              else {
                sVar3 = (ushort)DAT_003fa192 - (ushort)DAT_003fa194;
                if (sVar3 < -0x7f) {
                  sVar3 = sVar3 + 0xff;
                }
                else if (0x7f < sVar3) {
                  sVar3 = sVar3 + -0xff;
                }
                if (sVar3 < 0) {
                  bVar6 = 2;
                }
                else {
                  bVar6 = 0;
                }
              }
            }
            else if (_DAT_003fa18c == _DAT_003fa18e) {
              bVar6 = DAT_003fa1ac;
              if ((DAT_003fa1ac != 0) && (DAT_003fa1ac != 1)) {
                bVar6 = 0;
              }
            }
            else {
              sVar3 = (ushort)DAT_003fa192 - (ushort)DAT_003fa193;
              if (sVar3 < -0x7f) {
                sVar3 = sVar3 + 0xff;
              }
              else if (0x7f < sVar3) {
                sVar3 = sVar3 + -0xff;
              }
              if (sVar3 < 0) {
                bVar6 = 1;
              }
              else {
                bVar6 = 0;
              }
            }
          }
          else if ((_DAT_003fa18c == _DAT_003fa18e) && (_DAT_003fa190 == _DAT_003fa18c)) {
            DAT_003fa1b1 = DAT_003fa1b1 & 0xdf;
            bVar6 = DAT_003fa1ac;
          }
          else {
            DAT_003fa1b1 = DAT_003fa1b1 | 0x20;
            if (_DAT_003fa18e == _DAT_003fa190) {
              bVar6 = DAT_003fa1ac;
              if ((DAT_003fa1ac != 1) && (DAT_003fa1ac != 2)) {
                bVar6 = 1;
              }
            }
            else if (_DAT_003fa18c == _DAT_003fa18e) {
              bVar6 = DAT_003fa1ac;
              if ((DAT_003fa1ac != 0) && (DAT_003fa1ac != 1)) {
                bVar6 = 0;
              }
            }
            else if (_DAT_003fa18c == _DAT_003fa190) {
              bVar6 = DAT_003fa1ac;
              if ((DAT_003fa1ac != 0) && (DAT_003fa1ac != 2)) {
                bVar6 = 0;
              }
            }
            else {
              sVar3 = (ushort)DAT_003fa192 - (ushort)DAT_003fa193;
              if (sVar3 < -0x7f) {
                sVar3 = sVar3 + 0xff;
              }
              else if (0x7f < sVar3) {
                sVar3 = sVar3 + -0xff;
              }
              if (sVar3 < 0) {
                sVar3 = (ushort)DAT_003fa193 - (ushort)DAT_003fa194;
                if (sVar3 < -0x7f) {
                  sVar3 = sVar3 + 0xff;
                }
                else if (0x7f < sVar3) {
                  sVar3 = sVar3 + -0xff;
                }
                if (sVar3 < 0) {
                  bVar6 = 2;
                }
                else {
                  bVar6 = 1;
                }
              }
              else {
                sVar3 = (ushort)DAT_003fa192 - (ushort)DAT_003fa194;
                if (sVar3 < -0x7f) {
                  sVar3 = sVar3 + 0xff;
                }
                else if (0x7f < sVar3) {
                  sVar3 = sVar3 + -0xff;
                }
                if (sVar3 < 0) {
                  bVar6 = 2;
                }
                else {
                  bVar6 = 0;
                }
              }
            }
          }
          goto LAB_0009f810;
        }
      }
      if (((DAT_003fa1b1 & 3) != 3) && ((&UNK_003fa19b)[DAT_003fa1b1 & 3] != -0x80)) {
        DAT_003fa1b1 = DAT_003fa1b1 & 0xfc | 3;
      }
      DAT_003fa1ae = -0x80;
      goto LAB_0009f910;
    }
    if (DAT_003f9a48 == 0x40) {
      DAT_003fa1af = 0;
      DAT_003fa1ac = 0;
      DAT_003fa1ad = 0x41;
      DAT_003fa1ae = '\0';
      DAT_003f9a48 = 0x43;
      DAT_003fa1b1 = (&DAT_003fe734)[param_1];
      goto LAB_0009f058;
    }
    if (DAT_003f9a48 == 0x41) {
      if ((*(ushort *)(&DAT_00016c7e + param_1 * 10) & 3) < (ushort)(byte)(DAT_003fa1ac + 1)) {
        DAT_003f9a48 = 0x42;
      }
      else {
        DAT_003f9a48 = 0x43;
        DAT_003fa1ac = DAT_003fa1ac + 1;
      }
      goto LAB_0009f910;
    }
  }
  else {
    if (DAT_003f9a48 == 0x43) {
LAB_0009f058:
      uVar2 = FUN_0009ed4c(param_1,DAT_003fa1ac);
      cVar4 = func_0x0103a1e8(uVar2,*(undefined *)(param_1 * 10 + 0x16c80),param_2,&DAT_003fa1b0,
                              _DAT_003fa19e);
      if (cVar4 == '\0') {
        DAT_003fa1ae = -0x80;
      }
      else {
        DAT_003f9a48 = 0x44;
      }
      goto LAB_0009f910;
    }
    if (DAT_003f9a48 == 0x44) {
      if (DAT_003fa1b0 != '\0') {
        puVar9 = &DAT_003fa1a0;
        DAT_003fa1a0 = 0;
        uVar7 = (uint)DAT_003fa1ac;
        (&UNK_003fa19b)[uVar7] = DAT_003fa1b0;
        if (cVar4 == '\x01') {
          uVar8 = uVar7;
          cVar4 = FUN_0009edb4(param_1,param_2);
          (&DAT_003fa195)[uVar7] = cVar4;
          if (cVar4 == '\0') {
            DAT_003fa1af = DAT_003fa1af + 1;
            if (DAT_003fa1af < DAT_00016cfc) {
              DAT_003f9a48 = 0x43;
            }
            else {
              DAT_003fa1af = 0;
              DAT_003f9a48 = DAT_003fa1ad;
            }
          }
          else {
            DAT_003fa1af = 0;
            bVar6 = *(byte *)(param_1 * 10 + 0x16c80);
            *(undefined2 *)(&DAT_003fa18c + uVar8 * 2) = *(undefined2 *)((int)param_2 + (bVar6 - 2))
            ;
            (&DAT_003fa192)[uVar7] = *(undefined *)((int)param_2 + (bVar6 - 3));
            DAT_003f9a48 = DAT_003fa1ad;
          }
          *puVar9 = cVar4 == '\0';
        }
        else {
          DAT_003fa1af = DAT_003fa1af + 1;
          if (DAT_003fa1af < DAT_00016cfc) {
            DAT_003f9a48 = 0x43;
          }
          else {
            DAT_003fa1af = 0;
            (&DAT_003fa195)[uVar7] = 0;
            DAT_003f9a48 = DAT_003fa1ad;
          }
        }
      }
      goto LAB_0009f910;
    }
  }
  DAT_003fa1ae = -0x80;
LAB_0009f910:
  cVar4 = DAT_003fa1ae;
  if (DAT_003fa1ae != '\0') {
    if (DAT_003fa1ae == '\x01') {
      DAT_003fa1b1 = DAT_003fa1b1 & 0xbf;
    }
    else {
      DAT_003fa1b1 = DAT_003fa1b1 | 0x40;
    }
    (&DAT_003fe734)[param_1] = DAT_003fa1b1;
    DAT_003f9a48 = 0x40;
  }
  return cVar4;
}

