/*
 * Program: n42.bin
 * Function: FUN_0011f3ac
 * Entry: 0011f3ac
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0011f3ac(undefined4 param_1,byte **param_2)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  
  if (*(short *)((int)param_2 + 6) == 2) {
    cVar2 = FUN_00120dfc((*param_2)[1]);
    if (cVar2 == '\x01') {
      DAT_003fb225 = B_lsv == '\x01';
      if (B_lsv2 == '\x01') {
        DAT_003fb225 = DAT_003fb225 + 0x10;
      }
      DAT_003fb224 = 0xf < (*param_2)[1];
      DAT_003fb226 = 0x11;
      if ((DAT_001cb343 >> 1 & 1) == 0) {
        if ((DAT_001cb343 & 1) == 0) {
          if (B_lsh == '\x01') {
            DAT_003fb225 = DAT_003fb225 + 2;
          }
          if (B_lsh2 == '\x01') {
            DAT_003fb225 = DAT_003fb225 + 0x20;
          }
        }
        else {
          if (B_lsh == '\x01') {
            DAT_003fb225 = DAT_003fb225 + 2;
          }
          if (B_lsh2 == '\x01') {
            DAT_003fb225 = DAT_003fb225 + 4;
          }
          if ((*param_2)[1] < 4) {
            DAT_003fb224 = false;
          }
          else {
            DAT_003fb224 = true;
          }
        }
      }
      else if ((DAT_001cb343 & 1) == 0) {
        if (B_lsh == '\x01') {
          DAT_003fb225 = DAT_003fb225 + 2;
        }
      }
      else {
        if (B_lsh2 == '\x01') {
          DAT_003fb225 = DAT_003fb225 + 2;
        }
        if ((*param_2)[1] < 2) {
          DAT_003fb224 = false;
        }
        else {
          DAT_003fb224 = true;
        }
      }
      if ((DAT_003fb225 & (*param_2)[1]) == 0) {
        *(undefined2 *)(param_2 + 2) = 0;
        *(undefined *)((int)param_2 + 10) = 3;
      }
      else {
        (*param_2)[2] = 0;
        (*param_2)[3] = 0;
        (*param_2)[4] = 0;
        (*param_2)[5] = 0;
        pbVar3 = *param_2;
        if ((pbVar3[1] & 0x11) == 0) {
          bVar1 = *pbVar3;
          if (bVar1 < 3) {
            if (bVar1 == 2) {
              pbVar3[2] = DAT_001cf066;
              *(undefined2 *)(param_2 + 2) = 3;
              *(undefined *)((int)param_2 + 10) = 1;
              return;
            }
            if (bVar1 == 0) {
              pbVar3[2] = 0xc3;
              (*param_2)[3] = 0;
              (*param_2)[4] = 0;
              (*param_2)[5] = 0;
              *(undefined2 *)(param_2 + 2) = 6;
              *(undefined *)((int)param_2 + 10) = 1;
              return;
            }
            if (bVar1 == 1) {
              pbVar3[2] = DAT_001cf066;
              *(undefined2 *)(param_2 + 2) = 3;
              *(undefined *)((int)param_2 + 10) = 1;
              return;
            }
          }
          else {
            if (bVar1 == 7) {
              if (DAT_003fb224 == '\0') {
                pbVar3[2] = usmnshn;
              }
              else {
                pbVar3[2] = usmnshn2;
              }
              (*param_2)[3] = DAT_001cf062;
              (*param_2)[4] = DAT_001cf063;
              *(undefined2 *)(param_2 + 2) = 5;
              *(undefined *)((int)param_2 + 10) = 1;
              return;
            }
            if (bVar1 == 8) {
              if (DAT_003fb224 == '\0') {
                pbVar3[2] = usmxshn;
              }
              else {
                pbVar3[2] = usmxshn2;
              }
              (*param_2)[3] = DAT_001cf064;
              (*param_2)[4] = DAT_001cf065;
              *(undefined2 *)(param_2 + 2) = 5;
              *(undefined *)((int)param_2 + 10) = 1;
              return;
            }
          }
          *(undefined2 *)(param_2 + 2) = 0;
          *(undefined *)((int)param_2 + 10) = 3;
        }
        else {
          bVar1 = *pbVar3;
          if (bVar1 < 0x81) {
            if (bVar1 == 0x80) {
              pbVar3[2] = 0xf0;
              (*param_2)[3] = 0;
              (*param_2)[4] = 0;
              (*param_2)[5] = 0;
              *(undefined2 *)(param_2 + 2) = 6;
              *(undefined *)((int)param_2 + 10) = 1;
              return;
            }
            if (bVar1 == 0) {
              pbVar3[2] = 0;
              (*param_2)[3] = 0;
              (*param_2)[4] = 0;
              (*param_2)[5] = 1;
              *(undefined2 *)(param_2 + 2) = 6;
              *(undefined *)((int)param_2 + 10) = 1;
              return;
            }
            if (bVar1 == 0x20) {
              pbVar3[2] = 0;
              (*param_2)[3] = 0;
              (*param_2)[4] = 0;
              (*param_2)[5] = 1;
              *(undefined2 *)(param_2 + 2) = 6;
              *(undefined *)((int)param_2 + 10) = 1;
              return;
            }
            if (bVar1 == 0x40) {
              pbVar3[2] = 0;
              (*param_2)[3] = 0;
              (*param_2)[4] = 0;
              (*param_2)[5] = 1;
              *(undefined2 *)(param_2 + 2) = 6;
              *(undefined *)((int)param_2 + 10) = 1;
              return;
            }
            if (bVar1 == 0x60) {
              pbVar3[2] = 0;
              (*param_2)[3] = 0;
              (*param_2)[4] = 0;
              (*param_2)[5] = 1;
              *(undefined2 *)(param_2 + 2) = 6;
              *(undefined *)((int)param_2 + 10) = 1;
              return;
            }
          }
          else {
            if (bVar1 == 0x81) {
              if (DAT_003fb224 == '\0') {
                pbVar3[2] = lamsisa;
              }
              else {
                pbVar3[2] = lamsisa2;
              }
              (*param_2)[3] = DAT_001cf05e;
              (*param_2)[4] = DAT_001cf05f;
              *(undefined2 *)(param_2 + 2) = 5;
              *(undefined *)((int)param_2 + 10) = 1;
              return;
            }
            if (bVar1 == 0x82) {
              if (DAT_003fb224 == '\0') {
                pbVar3[2] = lamsosa;
              }
              else {
                pbVar3[2] = lamsosa2;
              }
              (*param_2)[3] = DAT_001cf05e;
              (*param_2)[4] = DAT_001cf05f;
              *(undefined2 *)(param_2 + 2) = 5;
              *(undefined *)((int)param_2 + 10) = 1;
              return;
            }
            if (bVar1 == 0x83) {
              if (DAT_003fb224 == '\0') {
                pbVar3[2] = dynlsusa;
              }
              else {
                pbVar3[2] = dynlsusa2;
              }
              (*param_2)[3] = DAT_001cf05d;
              (*param_2)[4] = DAT_001cf05c;
              *(undefined2 *)(param_2 + 2) = 5;
              *(undefined *)((int)param_2 + 10) = 1;
              return;
            }
            if (bVar1 == 0x84) {
              if (DAT_003fb224 == '\0') {
                pbVar3[2] = dlahisa;
              }
              else {
                pbVar3[2] = dlahisa2;
              }
              (*param_2)[3] = DAT_001cf05b;
              (*param_2)[4] = DAT_001cf05a;
              *(undefined2 *)(param_2 + 2) = 5;
              *(undefined *)((int)param_2 + 10) = 1;
              return;
            }
          }
          *(undefined2 *)(param_2 + 2) = 0;
          *(undefined *)((int)param_2 + 10) = 3;
        }
      }
    }
    else {
      *(undefined2 *)(param_2 + 2) = 0;
      *(undefined *)((int)param_2 + 10) = 3;
    }
  }
  else {
    *(undefined2 *)(param_2 + 2) = 0;
    *(undefined *)((int)param_2 + 10) = 3;
  }
  return;
}

