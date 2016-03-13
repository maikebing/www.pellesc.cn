/****************************************************************************
 *                                                                          *
 * File    : ids.h                                                          *
 *                                                                          *
 * Purpose : Misc ID's for menus, strings, icons etc.                       *
 *                                                                          *
 * History : Date      Reason                                               *
 *           03-02-02  Created                                              *
 *                                                                          *
 ****************************************************************************/

#ifndef _IDS_H
#define _IDS_H

//
// String ID's --------------------------------------------------------------
//

#define IDS_NULL                        10001

#define IDS_BADSCREENRESOLUTION         10002   // 6.50
#define IDS_BADCOMCTLVERSION            10003
#define IDS_BADVERSION                  10004
#define IDS_OUTOFMEMORY                 10005
#define IDS_MEMORYERROR                 10006
#define IDS_COMMDLGERROR                10007
#define IDS_THREADERROR                 10008
#define IDS_DEBUGGERERROR               10009
#define IDS_EXECERROR                   10010
#define IDS_PIPEERROR                   10011
#define IDS_BADNUMBER                   10012
#define IDS_BACKUPERROR                 10013
#define IDS_CHANGEDIRERROR              10014
#define IDS_CREATEDIRERROR              10015
#define IDS_CREATEFILEERROR             10016
#define IDS_OPENFILEERROR               10017
#define IDS_READFILEERROR               10018
#define IDS_WRITEFILEERROR              10019
#define IDS_RENAMEFILEERROR             10020   // 4.0
#define IDS_DELETEFILEERROR             10021   // 5.0
#define IDS_WRITEREGERROR               10022
#define IDS_WRITEXMLERROR               10023   // 5.0
#define IDS_PRINTERROR                  10024
#define IDS_HELPERROR                   10025
#define IDS_OPENURLERROR                10026   // 7.0
#define IDS_SAVENOW                     10027
#define IDS_QUITNOW                     10028
#define IDS_MUSTRELOADNOW               10029
#define IDS_RESTOREBACKUP               10030
#define IDS_WRAPFINDATBOTTOM            10031
#define IDS_WRAPFINDATTOP               10032
#define IDS_REPLACECOMPLETE             10033
#define IDS_FINDTEXTERROR               10034
#define IDS_FINDFUNCERROR               10035
#define IDS_BADDEVICECOLORS             10036
#define IDS_DELETEIMAGE                 10037
#define IDS_CANTEDITIMAGE               10038
#define IDS_BADDROPSHADOWIMAGE          10039   // 4.0
#define IDS_CREATECTRLERROR             10040
#define IDS_CREATEDLGERROR              10041
#define IDS_DUPCONTROLID                10042
#define IDS_DUPCONTROLMNEMONIC          10043
#define IDS_DUPPOPUPMNEMONIC            10044
#define IDS_NODUPMNEMONICS              10045
#define IDS_PASTEERROR                  10046
#define IDS_RESERVEDID                  10047
#define IDS_CREATERSRCERROR             10048
#define IDS_BADRESOURCENAME             10049
#define IDS_BADRESOURCETYPE             10050   // 3.0
#define IDS_DELETERESOURCE              10051
#define IDS_DUPRSRCLANGUAGE             10052
#define IDS_LOADFORMERROR               10053
#define IDS_SAVEFORMERROR               10054
#define IDS_LOADMENUERROR               10055
#define IDS_SAVEMENUERROR               10056
#define IDS_LOADACCELERROR              10057
#define IDS_SAVEACCELERROR              10058
#define IDS_LOADTEXTERROR               10059
#define IDS_SAVETEXTERROR               10060
#define IDS_LOADMESSERROR               10061   // 3.0
#define IDS_SAVEMESSERROR               10062   // 3.0
#define IDS_LOADIMAGEERROR              10063
#define IDS_SAVEIMAGEERROR              10064
#define IDS_LOADANIMERROR               10065
#define IDS_SAVEANIMERROR               10066
#define IDS_LOADEDITERROR               10067
#define IDS_SAVEEDITERROR               10068
#define IDS_LOADVERSERROR               10069
#define IDS_SAVEVERSERROR               10070
#define IDS_LOADDUMPERROR               10071
#define IDS_SAVEDUMPERROR               10072
#define IDS_ENLARGEBITMAP               10073
#define IDS_SELECTPROJROOT              10074
#define IDS_SELECTFINDPATH              10075
#define IDS_DUPPROJNAME                 10076
#define IDS_DELETEPROJECT               10077   // 4.0
#define IDS_IMPORTPROJECT               10078   // 4.0
#define IDS_IMPORTPROJFILE              10079
#define IDS_DELETEPROJFILE              10080
#define IDS_ADDPROJFILE                 10081
#define IDS_BADPROJPATH                 10082   // 7.0
#define IDS_BADPROJFILEPATH             10083   // 6.0
#define IDS_EXTRACTZIPERROR             10084
#define IDS_NOPROJZIPFILES              10085
#define IDS_NOPROJEXECUTOR              10086
#define IDS_DUPTEXTID                   10087
#define IDS_SETATTRIBERROR              10088
#define IDS_BADCOMPRESSION              10089
#define IDS_NEEDCERTIFICATE             10090   // 5.0
#define IDS_BADMACRONAME                10091
#define IDS_DUPMACRONAME                10092
#define IDS_NOMACROVALUE                10093   // 6.0
#define IDS_DUPCUSTCNTL                 10094
#define IDS_CANTLOADDLL                 10095
#define IDS_BADCUSTCNTL                 10096
#define IDS_CANTINITCUSTCNTL            10097
#define IDS_CUSTCNTLINUSE               10098
#define IDS_CUSTCNTLERROR               10099
#define IDS_BADLABELNAME                10100
#define IDS_DUPLABELS                   10101
#define IDS_DUPLABELID                  10102
#define IDS_DUPLABELNAME                10103
#define IDS_BADACCELKEY                 10104
#define IDS_BADSTRINGVALUE              10105
#define IDS_BADTOOLTEXT                 10106
#define IDS_BADTOOLCOMMAND              10107
#define IDS_BADTOOLMACRO                10108
#define IDS_BADHELPTEXT                 10109
#define IDS_BADHELPCOMMAND              10110
#define IDS_BADHELPBUILTIN              10111   // 7.0
#define IDS_BADSNIPPETNAME              10112   // 5.0
#define IDS_DUPSNIPPETNAME              10113   // 5.0
#define IDS_BADSNIPPETCODE              10114   // 5.0
#define IDS_SAVESNIPPETERROR            10115   // 5.0
#define IDS_DUPKEY                      10116
#define IDS_NODEBUGINFO                 10117
#define IDS_STOPDEBUGGER                10118
#define IDS_EXCEPTION1                  10119
#define IDS_EXCEPTION2                  10120
#define IDS_HARDWAREBREAK               10121   // 4.0
#define IDS_TIMESTAMPERROR              10122
#define IDS_BADBRKPNTLINE               10123
#define IDS_BADEXPRESSION               10124   // 4.0
#define IDS_NOBREAKCHAR                 10125
#define IDS_CFORMATERROR                10126   // 3.0
#define IDS_KILLPROCESS                 10127
//
#define IDS_FINDABORTED                 10128
#define IDS_FINDRESULT                  10129
#define IDS_NOFILETIME                  10130
#define IDS_FILESIZE                    10131
//
#define IDS_FILEPOPUP                   10132   // 7.0: IDS_TITLEFILE -> IDS_FILEPOPUP
#define IDS_EDITPOPUP                   10133   // 7.0
#define IDS_VIEWPOPUP                   10134   // 7.0: IDS_TITLEVIEW -> IDS_VIEWPOPUP
#define IDS_PROJPOPUP                   10135   // 7.0
#define IDS_TOOLPOPUP                   10136   // 7.0: IDS_TITLETOOLS -> IDS_TOOLPOPUP
#define IDS_WINPOPUP                    10137   // 7.0: IDS_TITLEWINDOWS -> IDS_WINPOPUP
#define IDS_HELPPOPUP                   10138   // 7.0: IDS_HELPTITLE -> IDS_HELPPOPUP
#define IDS_SRCPOPUP                    10139   // 7.0: IDS_EDITPOPUP -> IDS_SRCPOPUP
#define IDS_IMGPOPUP                    10140   // 7.0: IDS_PICTPOPUP -> IDS_IMGPOPUP
#define IDS_DLGPOPUP                    10141   // 7.0: IDS_FORMPOPUP -> IDS_DLGPOPUP
#define IDS_MENUPOPUP                   10142
#define IDS_MESSPOPUP                   10143   // 3.0
#define IDS_RSRCPOPUP                   10144
#define IDS_DBGPOPUP                    10145
#define IDS_WEBPOPUP                    10146   // 7.0
#define IDS_DIFFPOPUP                   10147   // 7.0
#define IDS_CUSTOMHELPPOPUP             10148   // 5.0
#define IDS_FILEFIND                    10149
#define IDS_STOPFILEFIND                10150   // 7.0: IDS_FILEFINDQUIT -> IDS_STOPFILEFIND
#define IDS_UNDOACTION                  10151
#define IDS_REDOACTION                  10152
#define IDS_BUILDPROJ                   10153
#define IDS_REBUILDPROJ                 10154   // 5.0
#define IDS_BUILDWKSPROJ                10155   // 5.0
#define IDS_REBUILDWKSPROJ              10156   // 5.0
#define IDS_STOPBUILD                   10157   // 5.0
#define IDS_COMPILEPROJ                 10158
#define IDS_EXECUTEPROJ                 10159
#define IDS_DEBUGPROJ                   10160
#define IDS_PROFILEPROJ                 10161   // 6.50
#define IDS_EXCLPROJ                    10162   // 4.0
#define IDS_INCLPROJ                    10163   // 4.0
#define IDS_FILEDIFF                    10164   // 7.0
#define IDS_STOPFILEDIFF                10165   // 7.0
#define IDS_TITLESETUP                  10166
#define IDS_TITLEPROJSETUP              10167   // 4.0
#define IDS_TITLECHOOSECOLOR            10168   // 4.0
#define IDS_TITLECUSTOMIZE              10169
#define IDS_TITLECUSTOM                 10170
#define IDS_TITLEMISC                   10171
#define IDS_TITLEDIFFERENCE             10172   // 7.0
#define IDS_TITLECURSOR                 10173
#define IDS_TITLEICON                   10174
#define IDS_TITLEBITMAP                 10175
#define IDS_TITLEMENU                   10176
#define IDS_TITLEDIALOG                 10177
#define IDS_TITLESTRINGTABLE            10178
#define IDS_TITLEACCELTABLE             10179
#define IDS_TITLEMSGTABLE               10180
#define IDS_TITLEVERSION                10181
#define IDS_TITLEANICURSOR              10182
#define IDS_TITLEANIICON                10183
#define IDS_TITLEHTML                   10184
#define IDS_TITLEXML                    10185
#define IDS_TITLEMANIFEST               10186
#define IDS_TITLERCDATA                 10187
#define IDS_TITLEVIDEO                  10188
#define IDS_TITLESOUND                  10189
#define IDS_TITLETYPELIB                10190
#define IDS_TITLEID                     10191
#define IDS_TITLETEXT                   10192
#define IDS_TITLEWORKSPACE              10193   // 4.0
#define IDS_TITLESOURCEFILES            10194
#define IDS_TITLEINCLUDEFILES           10195
#define IDS_TITLERESOURCEFILES          10196
#define IDS_TITLEOTHERFILES             10197
#define IDS_TITLEEXTERNALFILES          10198   // 8.0
#define IDS_TITLEFILENAME               10199
#define IDS_TITLEFILEPATH               10200
#define IDS_TITLEFILEDATE               10201
#define IDS_TITLELASTWRITETIME          10202
#define IDS_TITLEPROJECT                10203
#define IDS_TITLEFILEFIND               10204
#define IDS_TITLEDEBUGGER_RUNNING       10205
#define IDS_TITLEDEBUGGER_STOPPED       10206
#define IDS_TITLEPROFILER_RUNNING       10207   // 6.50
#define IDS_TITLEPROFILER               10208   // 6.50
#define IDS_TITLETRACE                  10209
#define IDS_TITLEOUTPUT                 10210
#define IDS_TITLEAUTO                   10211
#define IDS_TITLELOCALS                 10212
#define IDS_TITLEGLOBALS                10213
#define IDS_TITLEREGISTERS              10214
#define IDS_TITLESTACK                  10215
#define IDS_TITLEMEMORY                 10216
#define IDS_TITLETHREADS                10217
#define IDS_TITLEMODULES                10218
#define IDS_TITLEEXCEPTIONS             10219
#define IDS_TITLEBREAKPOINTS            10220
#define IDS_TITLEWATCH                  10221
#define IDS_TITLETHREADID               10222
#define IDS_TITLESUSPENDED              10223
#define IDS_TITLEPRIORITY               10224
#define IDS_TITLEHWBREAKNOTHING         10225   // 4.0
#define IDS_TITLEHWBREAKWRITEONLY       10226   // 4.0
#define IDS_TITLEHWBREAKREADWRITE       10227   // 4.0
#define IDS_TITLEHWBREAK1BYTE           10228   // 4.0
#define IDS_TITLEHWBREAK2BYTE           10229   // 4.0
#define IDS_TITLEHWBREAK4BYTE           10230   // 4.0
#define IDS_TITLESTOPALWAYS             10231
#define IDS_TITLEBROWSESOURCE           10232
#define IDS_TITLESAMPLES                10233   // 6.50
#define IDS_TITLEPERCENT                10234   // 6.50
#define IDS_TITLEFUNCTION               10235   // 6.50
#define IDS_TITLEMODULENAME             10236   // 6.50
#define IDS_TITLESOURCEFILE             10237   // 6.50
#define IDS_TITLEINCLUSIVE              10238   // 8.0
#define IDS_TITLEEXCLUSIVE              10239   // 8.0
#define IDS_TITLEIMPORT                 10240
#define IDS_TITLEADDFILES               10241
#define IDS_TITLEADDPROJECTS            10242   // 4.0
#define IDS_TITLEFILEVERSION            10243
#define IDS_TITLEPRODUCTVERSION         10244
#define IDS_TITLEFILEFLAGSMASK          10245
#define IDS_TITLEFILEFLAGS              10246
#define IDS_TITLEFILEOS                 10247
#define IDS_TITLEFILETYPE               10248
#define IDS_TITLEFILESUBTYPE            10249
#define IDS_TITLEBLOCKHEADER            10250
#define IDS_TITLECOMMENTS               10251
#define IDS_TITLECOMPANYNAME            10252
#define IDS_TITLEFILEDESCRIPTION        10253
#define IDS_TITLEFILEVERSION2           10254
#define IDS_TITLEINTERNALNAME           10255
#define IDS_TITLECOPYRIGHT              10256
#define IDS_TITLETRADEMARKS             10257
#define IDS_TITLEORIGINALNAME           10258
#define IDS_TITLEPRIVATEBUILD           10259
#define IDS_TITLEPRODUCTNAME            10260
#define IDS_TITLEPRODUCTVERSION2        10261
#define IDS_TITLESPECIALBUILD           10262
#define IDS_TITLEALLFRAMES              10263
#define IDS_TITLESOMEFRAMES             10264
#define IDS_TITLEONEFRAME               10265
#define IDS_TITLEPICTFRAME              10266
#define IDS_TITLEPATH                   10267
#define IDS_TITLELIB                    10268
#define IDS_TITLEINCLUDE                10269
#define IDS_TITLEPROPS                  10270
#define IDS_TITLENAME                   10271
#define IDS_TITLEVALUE                  10272
#define IDS_TITLEADDRESS                10273
#define IDS_TITLEDBGINFO                10274   // 8.0
#define IDS_TITLETYPE                   10275
#define IDS_TITLELINENO                 10276
#define IDS_TITLEADDMACRO               10277
#define IDS_TITLEEDITMACRO              10278
#define IDS_TITLEADDTOOL                10279
#define IDS_TITLEEDITTOOL               10280
#define IDS_TITLEADDHELP                10281
#define IDS_TITLEEDITHELP               10282
#define IDS_TITLEADDSNIPPET             10283   // 5.0
#define IDS_TITLEEDITSNIPPET            10284   // 5.0
#define IDS_TITLEKEY                    10285
#define IDS_TITLE1BPP                   10286
#define IDS_TITLE4BPP                   10287
#define IDS_TITLE8BPP                   10288
#define IDS_TITLE16BPP                  10289
#define IDS_TITLE24BPP                  10290
#define IDS_TITLE32BPP                  10291
#define IDS_TITLENONE                   10292
#define IDS_TITLEC                      10293
#define IDS_TITLEASM                    10294
#define IDS_TITLERC                     10295   // 6.0
#define IDS_TITLEMC                     10296   // 6.0
#define IDS_TITLEINST                   10297   // 5.0
#define IDS_TITLECB                     10298   // 5.0
#define IDS_TITLEDEF                    10299
#define IDS_TITLECUT                    10300
#define IDS_TITLECOPY                   10301
#define IDS_TITLEPASTE                  10302
#define IDS_TITLECLEAR                  10303
#define IDS_TITLEEDIT                   10304
#define IDS_TITLEINSERT                 10305
#define IDS_TITLEEFFECT                 10306
#define IDS_TITLEMIRROR                 10307
#define IDS_TITLEROTATE                 10308
#define IDS_TITLEGRAYSCALE              10309
#define IDS_TITLESEPIATONE              10310   // 4.0
#define IDS_TITLEOPAQUEALPHA            10311   // 4.0
#define IDS_TITLEHSV                    10312
#define IDS_TITLEDRAW                   10313
#define IDS_TITLESCREENCOLOR            10314
#define IDS_TITLERESIZE                 10315
#define IDS_TITLEALIGN                  10316
#define IDS_TITLEEVENSPACE              10317
#define IDS_TITLESIZETOTEXT             10318
#define IDS_TITLEMOVE                   10319
#define IDS_TITLECENTER                 10320
#define IDS_TITLEORDER                  10321
#define IDS_TITLECONVERT                10322
#define IDS_TITLEINDENT                 10323
#define IDS_TITLEREPLACE                10324
#define IDS_TITLEDRAGDROP               10325
#define IDS_TITLETEST                   10326   // 6.0
#define IDS_TITLEADVANCED               10327   // 6.0
#define IDS_TITLESTANDARD               10328   // 6.0
#define IDS_TITLEHELPCONTENTS           10329   // 7.0
#define IDS_TITLEHELPINDEX              10330   // 7.0
#define IDS_TITLEHELPSEARCH             10331   // 8.0
#define IDS_TITLEOUTLINE                10332   // 7.0
#define IDS_TITLEEXPAND                 10333   // 7.0
#define IDS_OPENINCLUDE                 10334   // 4.50
#define IDS_CONTEXTHELP                 10335
#define IDS_VIEWDEFINITION              10336
#define IDS_PREVDEFINITION              10337
#define IDS_FINDCALLSITES               10338   // 4.0
#define IDS_SURROUNDBY                  10339   // 5.0
#define IDS_EDITBREAKPOINT              10340   // 4.0
#define IDS_BREAKALWAYS                 10341   // 4.0
#define IDS_BREAKONHITCOUNT             10342   // 4.0
#define IDS_BREAKONEXPRESSION           10343   // 4.0
#define IDS_BREAKDISABLED               10344   // 4.0
#define IDS_APPNAME                     10345
#define IDS_APPVERSION                  10346
#define IDS_SPLASHVERSION               10347
#define IDS_DEBUGHELPER                 10348   // 8.0 (IDS_APPNAME_DBGHELPER -> IDS_APPNAME + IDS_DEBUGHELPER)
#define IDS_ADMINISTRATOR               10349   // 8.0
#define IDS_UNTITLED                    10350
#define IDS_YES                         10351
#define IDS_NO                          10352
#define IDS_EMPTY                       10353
#define IDS_SPECIAL                     10354
#define IDS_NEUTRAL                     10355   // 8.0
#define IDS_SAMPLELINE                  10356
#define IDS_PRINTFILE                   10357
#define IDS_PRINTPAGE                   10358
#define IDS_OUTPUTDONE                  10359
//
#define IDS_COMMONFILTER                10360
#define IDS_SOURCEFILTER                10361
#define IDS_RESOURCEFILTER              10362
#define IDS_PROJECTFILTER               10363
#define IDS_IMAGEFILTER                 10364
#define IDS_ANIMATIONFILTER             10365
#define IDS_EXECUTEFILTER               10366
#define IDS_INSTALLFILTER               10367   // 5.0
#define IDS_IMPSRCFILTER                10368   // 4.0
#define IDS_IMPPROJFILTER               10369   // 4.0
#define IDS_IMPRSRCFILTER               10370
#define IDS_IMPANICURFILTER             10371
#define IDS_IMPAVIFILTER                10372
#define IDS_CUSTCNTLFILTER              10373
#define IDS_PALETTEFILTER               10374
#define IDS_CUSTTOOLFILTER              10375
#define IDS_CUSTHELPFILTER              10376
#define IDS_ALLFILTER                   10377
#define IDS_SRCFILTER                   10378
#define IDS_INCFILTER                   10379
#define IDS_HTMFILTER                   10380
#define IDS_XMLFILTER                   10381
#define IDS_DEFFILTER                   10382
#define IDS_PISFILTER                   10383   // 5.0
#define IDS_CBFILTER                    10384   // 5.0
#define IDS_ASMFILTER                   10385
#define IDS_RCFILTER                    10386
#define IDS_RESFILTER                   10387
#define IDS_JPGFILTER                   10388
#define IDS_PNGFILTER                   10389
#define IDS_GIFFILTER                   10390
#define IDS_BMPFILTER                   10391
#define IDS_ICOFILTER                   10392
#define IDS_CURFILTER                   10393
#define IDS_ANICURFILTER                10394
#define IDS_AVIFILTER                   10395
#define IDS_ZIPFILTER                   10396
#define IDS_MSGFILTER                   10397   // 3.0
#define IDS_WAVFILTER                   10398   // 6.0
#define IDS_CEXT                        10399
#define IDS_HEXT                        10400
#define IDS_PPWEXT                      10401   // 4.0
#define IDS_PPJEXT                      10402
#define IDS_PPXEXT                      10403
#define IDS_TAGEXT                      10404
#define IDS_RCEXT                       10405
#define IDS_RESEXT                      10406
#define IDS_PCXEXT                      10407
#define IDS_GIFEXT                      10408
#define IDS_JPGEXT                      10409
#define IDS_PNGEXT                      10410
#define IDS_BMPEXT                      10411
#define IDS_DIBEXT                      10412
#define IDS_ICOEXT                      10413
#define IDS_CUREXT                      10414
#define IDS_ANIEXT                      10415
#define IDS_AVIEXT                      10416
#define IDS_PALEXT                      10417
#define IDS_HLPEXT                      10418
#define IDS_CHMEXT                      10419
#define IDS_LIBEXT                      10420
#define IDS_DLLEXT                      10421
#define IDS_EXEEXT                      10422
#define IDS_OBJEXT                      10423
#define IDS_HTMEXT                      10424
#define IDS_XMLEXT                      10425
#define IDS_ZIPEXT                      10426
#define IDS_DEFEXT                      10427
#define IDS_ASMEXT                      10428
#define IDS_INCEXT                      10429
#define IDS_MCEXT                       10430   // 6.0
#define IDS_MSGEXT                      10431   // 3.0
#define IDS_PISEXT                      10432   // 5.0
#define IDS_CBEXT                       10433   // 5.0
#define IDS_CABEXT                      10434   // 5.0
#define IDS_TXTEXT                      10435   // 5.0
#define IDS_WAVEXT                      10436   // 6.0
#define IDS_DATEXT                      10437   // 8.0
#define IDS_OPENAUTO                    10438   // 4.50
#define IDS_OPENTEXT                    10439   // 4.50
#define IDS_OPENBINARY                  10440   // 4.50
#define IDS_OPENRESOURCE                10441   // 4.50
#define IDS_OPENRCDATA                  10442   // 4.50
#define IDS_OPENCUSTOM                  10443   // 4.50
//
#define IDS_STATEPOS                    10444
#define IDS_STATESIZE                   10445
#define IDS_STATEEDIT                   10446
#define IDS_STATEDEPSCAN                10447
#define IDS_STATEBROWSEINFO             10448   // 8.0
#define IDS_STATEPOPUP                  10449
#define IDS_STATESEPARATOR              10450
#define IDS_STATEMENUITEM               10451
#define IDS_STATEIMAGELIST              10452
#define IDS_STATEOILPAINT               10453
#define IDS_STATEDITHER                 10454
#define IDS_STATEZIP                    10455   // 7.0
#define IDS_FILEFINDWHAT                10456
#define IDS_DEFAULTMENUTEXT             10457
#define IDS_DONTMESS                    10458
#define IDS_SELECTFROMLIST              10459
#define IDS_TARGETNAME                  10460
#define IDS_TARGETBASENAME              10461
#define IDS_FIRSTPREQNAME               10462
#define IDS_ALLPREQNAMES                10463
//
#define IDS_DIALOGTEXT                  10464   // 5.0
#define IDS_TEXTTEXT                    10465   // 5.0
#define IDS_EDITBOXTEXT                 10466   // 5.0
#define IDS_GROUPBOXTEXT                10467   // 5.0
#define IDS_PUSHBUTTONTEXT              10468   // 5.0
#define IDS_CHECKBOXTEXT                10469   // 5.0
#define IDS_RADIOBUTTONTEXT             10470   // 5.0
#define IDS_RICHEDITTEXT                10471   // 5.0
#define IDS_SYSLINKTEXT                 10472   // 5.0
#define IDS_NETADDRESSTEXT              10473   // 5.0
#define IDS_SPLITBUTTONTEXT             10474   // 5.0
#define IDS_COMMANDLINKTEXT             10475   // 5.0
#define IDS_CUSTOMTEXT                  10476   // 5.0
//
#define IDS_UNUSED                      10477
#define IDS_IDOK                        10478
#define IDS_IDCANCEL                    10479
//
#define IDS_RCHEADER                    10480
#define IDS_HHEADER                     10481
//
#define IDS_ACCELSHIFT                  10482
#define IDS_ACCELCONTROL                10483
#define IDS_ACCELALT                    10484
//
#define IDS_MAKHEADER                   10485
#define IDS_MAKTARGET                   10486
#define IDS_BUILDING                    10487
#define IDS_BUILDDONE                   10488
#define IDS_BUILDABORTED                10489
#define IDS_BUILDFAILURE                10490
#define IDS_BUILDBROWSEFAILURE          10491   // 6.0
#define IDS_BUILDMACROERROR             10492
#define IDS_BUILDERROR                  10493
#define IDS_BUILDERRORIGNORE            10494
#define IDS_BUILDERRORMSG               10495
#define IDS_PROJGRP_WIZARD              10496   // 4.50
#define IDS_PROJGRP_EMPTY               10497   // 4.50
#define IDS_PROJTYPE_W32APP             10498
#define IDS_PROJTYPE_W32DLL             10499
#define IDS_PROJTYPE_W32LIB             10500
#define IDS_PROJTYPE_W32CON             10501
#define IDS_PROJTYPE_W64APP             10502   // 5.0
#define IDS_PROJTYPE_W64DLL             10503   // 5.0
#define IDS_PROJTYPE_W64LIB             10504   // 5.0
#define IDS_PROJTYPE_W64CON             10505   // 5.0
#define IDS_PROJTYPE_PPCAPP             10506
#define IDS_PROJTYPE_PPCDLL             10507
#define IDS_PROJTYPE_PPCLIB             10508
#define IDS_PROJTYPE_SPAPP              10509
#define IDS_PROJTYPE_SPDLL              10510
#define IDS_PROJTYPE_SPLIB              10511
#define IDS_PROJTYPE_W32INST            10512   // 5.0
#define IDS_PROJTYPE_PPCINST            10513   // 5.0
#define IDS_PROJTYPE_SPINST             10514   // 5.0
#define IDS_WKSHEADER                   10515   // 4.0
//
#define IDS_CC_WARNLEVEL0               10516
#define IDS_CC_WARNLEVEL1               10517
#define IDS_CC_WARNLEVEL2               10518
#define IDS_CC_OPTNONE                  10519
#define IDS_CC_OPTSPEED                 10520
#define IDS_CC_OPTSIZE                  10521
#define IDS_CC_OPTSPEEDEXT              10522
#define IDS_CC_OPTSIZEEXT               10523
#define IDS_CC_DEBUGNONE                10524
#define IDS_CC_DEBUGLINES               10525
#define IDS_CC_DEBUGFULL                10526
#define IDS_CC_CDECL                    10527
#define IDS_CC_STDCALL                  10528
#define IDS_CC_FASTCALL                 10529
#define IDS_CC_CRT                      10530
#define IDS_CC_CRTMT                    10531
#define IDS_CC_CRTDLL                   10532
#define IDS_CC_X86                      10533
#define IDS_CC_ARM                      10534
#define IDS_CC_X64                      10535   // 5.0
#define IDS_CC_FPFAST                   10536   // 6.0
#define IDS_CC_FPPRECISE                10537   // 6.0
#define IDS_CC_INLINENONE               10538   // 6.0
#define IDS_CC_INLINEUSER               10539   // 6.0
#define IDS_CC_INLINEAUTO               10540   // 6.0
#define IDS_CC_C99                      10541   // 7.0
#define IDS_CC_C11                      10542   // 7.0
#define IDS_AS_DEBUGNONE                10543
#define IDS_AS_DEBUGLINES               10544
#define IDS_AS_DEBUGFULL                10545
#define IDS_AS_CDECL                    10546   // 4.50
#define IDS_AS_STDCALL                  10547   // 4.50
#define IDS_AS_FASTCALL                 10548   // 4.50
#define IDS_AS_X86                      10549   // 4.50
#define IDS_AS_ARM                      10550   // 4.50
#define IDS_AS_X64                      10551   // 5.0
#define IDS_LD_DEBUGNONE                10552
#define IDS_LD_DEBUGCV                  10553
#define IDS_LD_DEBUGCOFF                10554
#define IDS_LD_DEBUGBOTH                10555
#define IDS_LD_NATIVE                   10556
#define IDS_LD_CONSOLE                  10557
#define IDS_LD_WINDOWS                  10558
#define IDS_LD_WINDOWSCE                10559
#define IDS_LD_X86                      10560
#define IDS_LD_ARM                      10561
#define IDS_LD_X64                      10562   // 5.0
//
#define IDS_DBG_DONE                    10563
#define IDS_DBG_CREATEPROCESS           10564
#define IDS_DBG_CREATETHREAD            10565
#define IDS_DBG_LOADMODULE              10566
#define IDS_DBG_EXITPROCESS             10567
#define IDS_DBG_EXITTHREAD              10568
#define IDS_DBG_UNLOADMODULE            10569
#define IDS_DBG_RELOCATION              10570
#define IDS_DBG_LOADERROR               10571
#define IDS_DBG_BORLAND                 10572   // 4.0
#define IDS_DBG_BADEXPRESSION           10573   // 4.0
#define IDS_DBG_STARTCONNECTION         10574   // 5.0
#define IDS_DBG_CLOSECONNECTION         10575   // 5.0
#define IDS_DBG_STARTSERVER             10576   // 4.50
#define IDS_DBG_STOPSERVER              10577   // 4.50
#define IDS_DBG_REMOTEPROCESS           10578   // 4.50
//
// Commands (custom keyboard).
//
#define IDS_FILE_NEWPROJECT             10579
#define IDS_FILE_NEWSOURCE              10580
#define IDS_FILE_NEWRESOURCE            10581
#define IDS_FILE_NEWBITMAP              10582
#define IDS_FILE_NEWICON                10583
#define IDS_FILE_NEWCURSOR              10584
#define IDS_FILE_NEWANICURSOR           10585
#define IDS_FILE_NEWVIDEO               10586
#define IDS_FILE_NEWHEXDUMP             10587
#define IDS_FILE_NEWMSGTABLE            10588   // 3.0
#define IDS_FILE_NEWWEB                 10589   // 7.0
#define IDS_FILE_NEWDIFF                10590   // 7.0
#define IDS_FILE_OPEN                   10591
#define IDS_FILE_CLOSE                  10592
#define IDS_FILE_CLOSEPROJ              10593   // 5.0
#define IDS_FILE_SAVE                   10594
#define IDS_FILE_SAVEAS                 10595
#define IDS_FILE_SAVEALL                10596
#define IDS_FILE_PRINT                  10597
#define IDS_FILE_PRINTSETUP             10598
#define IDS_FILE_PROPERTIES             10599
#define IDS_FILE_EXIT                   10600
//
#define IDS_EDIT_UNDO                   10601
#define IDS_EDIT_REDO                   10602
#define IDS_EDIT_CUT                    10603
#define IDS_EDIT_COPY                   10604
#define IDS_EDIT_PASTE                  10605
#define IDS_EDIT_INSERT                 10606
#define IDS_EDIT_DELETE                 10607
#define IDS_EDIT_DELETEWORD             10608
#define IDS_EDIT_SELECTALL              10609
#define IDS_EDIT_FIND                   10610
#define IDS_EDIT_FINDNEXT               10611
#define IDS_EDIT_REPLACE                10612
#define IDS_EDIT_FILEFIND               10613
#define IDS_EDIT_GOTO                   10614
//
#define IDS_VIEW_SHOWTOOLBAR            10615
#define IDS_VIEW_SHOWSTATUSBAR          10616
#define IDS_VIEW_SHOWDOCTABS            10617
#define IDS_VIEW_SHOWWELCOME            10618   // 7.0
#define IDS_VIEW_TOGGLEFULLSCREEN       10619   // 8.0
#define IDS_VIEW_SOURCEFILES            10620   // 5.0
#define IDS_VIEW_TARGETFILES            10621   // 5.0
//
#define IDS_PROJ_ADDFILE                10622
#define IDS_PROJ_ADDPROJECT             10623   // 4.0
#define IDS_PROJ_SETTINGS               10624
#define IDS_PROJ_COMPILE                10625
#define IDS_PROJ_BUILD                  10626
#define IDS_PROJ_REBUILD                10627   // 5.0: IDS_PROJ_BUILDALL -> IDS_PROJ_REBUILD
#define IDS_PROJ_BUILDWKS               10628   // 5.0
#define IDS_PROJ_REBUILDWKS             10629   // 5.0
#define IDS_PROJ_STOPBUILD              10630
#define IDS_PROJ_MAKEALLPREQS           10631
#define IDS_PROJ_EXECUTE                10632
#define IDS_PROJ_PROFILE                10633   // 6.50
#define IDS_PROJ_ZIP                    10634
#define IDS_PROJ_UNZIP                  10635
#define IDS_PROJ_SETACTIVE              10636   // 4.0
#define IDS_PROJ_DEPENDENCIES           10637   // 4.0
//
#define IDS_TOOL_CUSTOMIZE              10638
#define IDS_TOOL_SETTINGS               10639
#define IDS_TOOL_CUSTOMTOOL             10640
#define IDS_TOOL_CUSTOMTOOL_1           10641
#define IDS_TOOL_CUSTOMTOOL_2           10642
#define IDS_TOOL_CUSTOMTOOL_3           10643
#define IDS_TOOL_CUSTOMTOOL_4           10644
#define IDS_TOOL_CUSTOMTOOL_5           10645
#define IDS_TOOL_CUSTOMTOOL_6           10646
#define IDS_TOOL_CUSTOMTOOL_7           10647
#define IDS_TOOL_CUSTOMTOOL_8           10648   // 5.0
#define IDS_TOOL_CUSTOMTOOL_9           10649   // 5.0
#define IDS_TOOL_CUSTOMTOOL_10          10650   // 5.0
#define IDS_TOOL_CUSTOMTOOL_11          10651   // 5.0
#define IDS_TOOL_CUSTOMTOOL_12          10652   // 5.0
#define IDS_TOOL_CUSTOMTOOL_13          10653   // 5.0
#define IDS_TOOL_CUSTOMTOOL_14          10654   // 5.0
#define IDS_TOOL_CUSTOMTOOL_15          10655   // 5.0
//
#define IDS_WIN_NEW                     10656
#define IDS_WIN_CASCADE                 10657
#define IDS_WIN_TILEVERT                10658
#define IDS_WIN_TILEHORZ                10659
#define IDS_WIN_CLOSEALL                10660
//
#define IDS_HELP_CONTENTS               10661
#define IDS_HELP_ABOUT                  10662
#define IDS_HELP_CUSTOMHELP             10663
#define IDS_HELP_CUSTOMHELP_1           10664
#define IDS_HELP_CUSTOMHELP_2           10665
#define IDS_HELP_CUSTOMHELP_3           10666
#define IDS_HELP_CUSTOMHELP_4           10667
#define IDS_HELP_CUSTOMHELP_5           10668
#define IDS_HELP_CUSTOMHELP_6           10669
#define IDS_HELP_CUSTOMHELP_7           10670
#define IDS_HELP_CUSTOMHELP_8           10671   // 5.0
#define IDS_HELP_CUSTOMHELP_9           10672   // 5.0
#define IDS_HELP_CUSTOMHELP_10          10673   // 5.0
#define IDS_HELP_CUSTOMHELP_11          10674   // 5.0
#define IDS_HELP_CUSTOMHELP_12          10675   // 5.0
#define IDS_HELP_CUSTOMHELP_13          10676   // 5.0
#define IDS_HELP_CUSTOMHELP_14          10677   // 5.0
#define IDS_HELP_CUSTOMHELP_15          10678   // 5.0
//
#define IDS_IMG_NEWIMAGE                10679
#define IDS_IMG_DELETEIMAGE             10680
#define IDS_IMG_RESIZE                  10681   // 5.0
#define IDS_IMG_MIRROR_HORZ             10682
#define IDS_IMG_MIRROR_VERT             10683
#define IDS_IMG_ROTATE                  10684
#define IDS_IMG_GRAYSCALE               10685
#define IDS_IMG_SEPIATONE               10686   // 4.0
#define IDS_IMG_HSV                     10687
#define IDS_IMG_OPAQUEALPHA             10688   // 4.0
#define IDS_IMG_EFFECT_OILPAINT         10689
#define IDS_IMG_EFFECT_SPREAD           10690
#define IDS_IMG_EFFECT_EMBOSS           10691
#define IDS_IMG_EFFECT_FISHEYE          10692
#define IDS_IMG_EFFECT_DROPSHADOW       10693   // 4.0
#define IDS_IMG_EFFECT_BLUR             10694
#define IDS_IMG_EFFECT_SHARPEN          10695
//
#define IDS_DLG_NEWPICTURE              10696   // 4.50
#define IDS_DLG_NEWTEXT                 10697   // 4.50
#define IDS_DLG_NEWEDITBOX              10698   // 4.50
#define IDS_DLG_NEWGROUPBOX             10699   // 4.50
#define IDS_DLG_NEWPUSHBUTTON           10700   // 4.50
#define IDS_DLG_NEWCHECKBOX             10701   // 4.50
#define IDS_DLG_NEWRADIOBUTTON          10702   // 4.50
#define IDS_DLG_NEWCOMBOBOX             10703   // 4.50
#define IDS_DLG_NEWLISTBOX              10704   // 4.50
#define IDS_DLG_NEWHSCROLLBAR           10705   // 4.50
#define IDS_DLG_NEWVSCROLLBAR           10706   // 4.50
#define IDS_DLG_NEWUPDOWN               10707   // 4.50
#define IDS_DLG_NEWPROGRESS             10708   // 4.50
#define IDS_DLG_NEWTRACKBAR             10709   // 4.50
#define IDS_DLG_NEWHOTKEY               10710   // 4.50
#define IDS_DLG_NEWLISTVIEW             10711   // 4.50
#define IDS_DLG_NEWTREEVIEW             10712   // 4.50
#define IDS_DLG_NEWTABCONTROL           10713   // 4.50
#define IDS_DLG_NEWANIMATE              10714   // 4.50
#define IDS_DLG_NEWRICHEDIT             10715   // 4.50
#define IDS_DLG_NEWRICHED20             10716   // 4.50
#define IDS_DLG_NEWDATETIME             10717   // 4.50
#define IDS_DLG_NEWMONTHCAL             10718   // 4.50
#define IDS_DLG_NEWCOMBOBOXEX           10719   // 4.50
#define IDS_DLG_NEWREBAR                10720   // 4.50
#define IDS_DLG_NEWPAGER                10721   // 4.50
#define IDS_DLG_NEWTOOLBAR              10722   // 4.50
#define IDS_DLG_NEWSTATUSBAR            10723   // 4.50
#define IDS_DLG_NEWSYSLINK              10724   // 5.0
#define IDS_DLG_NEWIPADDRESS            10725   // 5.0
#define IDS_DLG_NEWNETADDRESS           10726   // 5.0
#define IDS_DLG_NEWSPLITBUTTON          10727   // 5.0
#define IDS_DLG_NEWCOMMANDLINK          10728   // 5.0
#define IDS_DLG_NEWNATIVEFONT           10729   // 5.0
#define IDS_DLG_ALIGNLEFT               10730
#define IDS_DLG_ALIGNVERT               10731
#define IDS_DLG_ALIGNRIGHT              10732
#define IDS_DLG_ALIGNTOP                10733
#define IDS_DLG_ALIGNHORZ               10734
#define IDS_DLG_ALIGNBOTTOM             10735
#define IDS_DLG_CENTERVERT              10736
#define IDS_DLG_CENTERHORZ              10737
#define IDS_DLG_SPACEVERT               10738
#define IDS_DLG_SPACEHORZ               10739
#define IDS_DLG_ARRSIZEWIDTH            10740
#define IDS_DLG_ARRSIZEHEIGHT           10741
#define IDS_DLG_ARRSIZEBOTH             10742
#define IDS_DLG_ARRPUSHBOTTOM           10743
#define IDS_DLG_ARRPUSHRIGHT            10744
#define IDS_DLG_SIZETOTEXT              10745
#define IDS_DLG_NEWCUSTOM               10746
#define IDS_DLG_OPENCUSTOM              10747
#define IDS_DLG_REMOVECUSTOM            10748
#define IDS_DLG_LOCKCONTROLS            10749
#define IDS_DLG_ORDERCONTROLS           10750
//
#define IDS_RSRC_NEWBITMAP              10751
#define IDS_RSRC_NEWICON                10752
#define IDS_RSRC_NEWCURSOR              10753
#define IDS_RSRC_NEWANICURSOR           10754
#define IDS_RSRC_NEWVIDEO               10755
#define IDS_RSRC_NEWDIALOG              10756
#define IDS_RSRC_NEWMENU                10757
#define IDS_RSRC_NEWSTRINGTABLE         10758
#define IDS_RSRC_NEWMSGTABLE            10759   // 3.0
#define IDS_RSRC_NEWACCEL               10760
#define IDS_RSRC_NEWVERSION             10761
#define IDS_RSRC_NEWMANIFEST            10762
#define IDS_RSRC_NEWHTML                10763   // 5.0
#define IDS_RSRC_NEWCUSTOM              10764   // 3.0
#define IDS_RSRC_NEWCOPY                10765
#define IDS_RSRC_IMPORT                 10766
#define IDS_RSRC_EXPORT                 10767   // 6.0
#define IDS_RSRC_SORTNAMES              10768
#define IDS_RSRC_LABELS                 10769   // 6.50: IDS_VIEW_LABELS -> IDS_RSRC_LABELS
#define IDS_RSRC_INCLUDES               10770   // 6.50: IDS_VIEW_INCLUDES -> IDS_RSRC_INCLUDES
//
#define IDS_MESS_SETINCLUDE             10771   // 3.0
#define IDS_MESS_VIEWLABELS             10772   // 3.0
//
#define IDS_SRC_FORCECALLTIP            10773   // 4.50
#define IDS_SRC_COMPLETEWORD            10774
#define IDS_SRC_INSERTSNIPPET           10775   // 5.0
#define IDS_SRC_SURROUNDBY              10776   // 5.0
#define IDS_SRC_SURROUNDBY_1            10777   // 5.0
#define IDS_SRC_SURROUNDBY_2            10778   // 5.0
#define IDS_SRC_SURROUNDBY_3            10779   // 5.0
#define IDS_SRC_SURROUNDBY_4            10780   // 5.0
#define IDS_SRC_SURROUNDBY_5            10781   // 5.0
#define IDS_SRC_SURROUNDBY_6            10782   // 5.0
#define IDS_SRC_SURROUNDBY_7            10783   // 5.0
#define IDS_SRC_SURROUNDBY_8            10784   // 5.0
#define IDS_SRC_SURROUNDBY_9            10785   // 5.0
#define IDS_SRC_SURROUNDBY_10           10786   // 5.0
#define IDS_SRC_SURROUNDBY_11           10787   // 5.0
#define IDS_SRC_SURROUNDBY_12           10788   // 5.0
#define IDS_SRC_SURROUNDBY_13           10789   // 5.0
#define IDS_SRC_SURROUNDBY_14           10790   // 5.0
#define IDS_SRC_SURROUNDBY_15           10791   // 5.0
#define IDS_SRC_UCASE                   10792
#define IDS_SRC_LCASE                   10793
#define IDS_SRC_TABTOSPACE              10794
#define IDS_SRC_SPACETOTAB              10795
#define IDS_SRC_FORMAT                  10796   // 3.0
#define IDS_SRC_COMMENT                 10797   // 4.0
#define IDS_SRC_UNCOMMENT               10798   // 4.0
#define IDS_SRC_NEXTBOOKMARK            10799
#define IDS_SRC_PREVBOOKMARK            10800
#define IDS_SRC_SETBOOKMARK             10801
#define IDS_SRC_CLEARBOOKMARKS          10802
#define IDS_SRC_WHITESPACE              10803
#define IDS_SRC_LINEBREAKS              10804
#define IDS_SRC_LINENUMBERS             10805
#define IDS_SRC_FOLDINGS                10806
#define IDS_SRC_MATCHINGBRACES          10807   // 4.50
#define IDS_SRC_VIEWDEFINITION          10808   // 6.0
#define IDS_SRC_PREVDEFINITION          10809   // 6.0
#define IDS_SRC_FOLDALL                 10810
#define IDS_SRC_UNFOLDALL               10811
//
#define IDS_DBG_GO                      10812
#define IDS_DBG_RESTART                 10813
#define IDS_DBG_STOP                    10814
#define IDS_DBG_BREAK                   10815
#define IDS_DBG_STEPINTO                10816
#define IDS_DBG_STEPOVER                10817
#define IDS_DBG_STEPOUT                 10818   // 4.0
#define IDS_DBG_RUNTOCURSOR             10819   // 4.0
#define IDS_DBG_TOGGLEBREAKPOINT        10820   // 4.0
#define IDS_DBG_SHOWNEXTSTMT            10821
#define IDS_DBG_ADDWATCH                10822
#define IDS_DBG_QUICKWATCH              10823   // 4.0
#define IDS_DBG_HWBREAKS                10824   // 4.0 B4
//
#define IDS_WEB_BACK                    10825   // 7.0
#define IDS_WEB_FORWARD                 10826   // 7.0
#define IDS_WEB_HOME                    10827   // 8.0
#define IDS_WEB_REFRESH                 10828   // 7.0
#define IDS_WEB_CERTIFICATE             10829   // 7.0
#define IDS_WEB_SHOWSOURCE              10830   // 7.0
//
#define IDS_DIFF_PREVCHANGE             10831   // 7.0
#define IDS_DIFF_NEXTCHANGE             10832   // 7.0
#define IDS_DIFF_REFRESH                10833   // 7.0
#define IDS_DIFF_OPENLEFT               10834   // 7.0
#define IDS_DIFF_OPENRIGHT              10835   // 7.0
//
#define IDS_MISC_OPEN                   10836
#define IDS_MISC_TEST                   10837
#define IDS_MISC_CHECKMNEMONICS         10838
#define IDS_MISC_NEXTWINDOW             10839
//
// Tooltips.
//
#define IDS_TIP_NEW                     10840
#define IDS_TIP_OPEN                    10841
#define IDS_TIP_SAVE                    10842
#define IDS_TIP_SAVEALL                 10843
#define IDS_TIP_CUT                     10844
#define IDS_TIP_COPY                    10845
#define IDS_TIP_PASTE                   10846
#define IDS_TIP_UNDO                    10847
#define IDS_TIP_REDO                    10848
#define IDS_TIP_COMPILE                 10849
#define IDS_TIP_BUILD                   10850
#define IDS_TIP_SETTINGS                10851   // 8.0
#define IDS_TIP_EXECUTE                 10852
#define IDS_TIP_GO                      10853
#define IDS_TIP_RESTART                 10854
#define IDS_TIP_STOPDEBUG               10855   // 7.0: IDS_TIP_STOP -> IDS_TIP_STOPDEBUG
#define IDS_TIP_STEPINTO                10856
#define IDS_TIP_STEPOVER                10857
#define IDS_TIP_STEPOUT                 10858   // 4.0
#define IDS_TIP_QUICKWATCH              10859   // 4.0
#define IDS_TIP_DELETE                  10860
#define IDS_TIP_CHECKMNEMONICS          10861
//
#define IDS_TIP_PENCIL                  10862
#define IDS_TIP_BRUSH                   10863
#define IDS_TIP_SELECT                  10864
#define IDS_TIP_PICKCOLOR               10865
#define IDS_TIP_LINE                    10866
#define IDS_TIP_RECT                    10867
#define IDS_TIP_ELLIPSE                 10868   // 4.0 (renamed)
#define IDS_TIP_ROUNDRECT               10869
#define IDS_TIP_DRAWTEXT                10870
#define IDS_TIP_FLOODFILL               10871
#define IDS_TIP_SPRAY                   10872
#define IDS_TIP_ERASER                  10873
#define IDS_TIP_MAGNIFY                 10874
#define IDS_TIP_HOTSPOT                 10875
#define IDS_TIP_GRADIENT                10876   // 5.0
#define IDS_TIP_LEFTCOLOR               10877
#define IDS_TIP_RIGHTCOLOR              10878
#define IDS_TIP_SCREENCOLOR             10879
#define IDS_TIP_INVERSECOLOR            10880
#define IDS_TIP_TRANSPARENTCOLOR        10881   // 5.0
#define IDS_TIP_PALETTE                 10882   // 4.0
#define IDS_TIP_LOADPALETTE             10883   // 4.0
#define IDS_TIP_SAVEPALETTE             10884   // 4.0
#define IDS_TIP_RGBCOLOR                10885   // 4.0 (renamed)
#define IDS_TIP_RGBACOLOR               10886   // 4.0
//
#define IDS_TIP_POINTER                 10887
#define IDS_TIP_PICTURE                 10888
#define IDS_TIP_TEXT                    10889
#define IDS_TIP_EDITBOX                 10890
#define IDS_TIP_GROUPBOX                10891
#define IDS_TIP_PUSHBUTTON              10892
#define IDS_TIP_CHECKBOX                10893
#define IDS_TIP_RADIOBUTTON             10894
#define IDS_TIP_COMBOBOX                10895
#define IDS_TIP_LISTBOX                 10896
#define IDS_TIP_HSCROLLBAR              10897
#define IDS_TIP_VSCROLLBAR              10898
#define IDS_TIP_UPDOWN                  10899
#define IDS_TIP_PROGRESS                10900
#define IDS_TIP_TRACKBAR                10901
#define IDS_TIP_HOTKEY                  10902
#define IDS_TIP_LISTVIEW                10903
#define IDS_TIP_TREEVIEW                10904
#define IDS_TIP_TABCONTROL              10905
#define IDS_TIP_ANIMATE                 10906
#define IDS_TIP_RICHEDIT                10907
#define IDS_TIP_RICHED20                10908   // 4.50
#define IDS_TIP_DATETIME                10909
#define IDS_TIP_MONTHCAL                10910
#define IDS_TIP_COMBOBOXEX              10911
#define IDS_TIP_REBAR                   10912
#define IDS_TIP_PAGER                   10913
#define IDS_TIP_TOOLBAR                 10914
#define IDS_TIP_STATUSBAR               10915
#define IDS_TIP_SYSLINK                 10916   // 5.0
#define IDS_TIP_IPADDRESS               10917   // 5.0
#define IDS_TIP_NETADDRESS              10918   // 5.0
#define IDS_TIP_SPLITBUTTON             10919   // 5.0
#define IDS_TIP_COMMANDLINK             10920   // 5.0
#define IDS_TIP_NATIVEFONT              10921   // 5.0
#define IDS_TIP_CUSTOM                  10922
//
#define IDS_TIP_TEST                    10923
#define IDS_TIP_LOCKCONTROLS            10924
#define IDS_TIP_ORDERCONTROLS           10925
#define IDS_TIP_ARRPUSHBOTTOM           10926
#define IDS_TIP_ARRPUSHRIGHT            10927
#define IDS_TIP_ALIGNLEFT               10928
#define IDS_TIP_ALIGNRIGHT              10929
#define IDS_TIP_ALIGNTOP                10930
#define IDS_TIP_ALIGNBOTTOM             10931
#define IDS_TIP_ALIGNHORZ               10932
#define IDS_TIP_ALIGNVERT               10933
#define IDS_TIP_SPACEHORZ               10934
#define IDS_TIP_SPACEVERT               10935
#define IDS_TIP_ARRSIZEWIDTH            10936
#define IDS_TIP_ARRSIZEHEIGHT           10937
#define IDS_TIP_ARRSIZEBOTH             10938
#define IDS_TIP_CENTERHORZ              10939
#define IDS_TIP_CENTERVERT              10940
//
#define IDS_TIP_NEWFOLDER               10941
#define IDS_TIP_NEWFILE                 10942
#define IDS_TIP_NEWTOOL                 10943
#define IDS_TIP_NEWHELP                 10944
#define IDS_TIP_NEWSNIPPET              10945   // 5.0
#define IDS_TIP_IMPORT                  10946   // 5.0
#define IDS_TIP_EXPORT                  10947   // 5.0
#define IDS_TIP_MOVEUP                  10948
#define IDS_TIP_MOVEDOWN                10949
//
#define IDS_TIP_NEWIMAGE                10950
#define IDS_TIP_DELETEIMAGE             10951
//
#define IDS_TIP_NEWMACRO                10952   // 6.50
#define IDS_TIP_EDITMACRO               10953   // 6.50
//
#define IDS_TIP_SOURCEFILES             10954
#define IDS_TIP_TARGETFILES             10955
#define IDS_TIP_CLOSE                   10956
//
#define IDS_TIP_BACK                    10957   // 7.0
#define IDS_TIP_FORWARD                 10958   // 7.0
#define IDS_TIP_HOME                    10959   // 8.0
#define IDS_TIP_REFRESH                 10960   // 7.0
#define IDS_TIP_CERTIFICATE             10961   // 7.0
//
#define IDS_TIP_PREVCHANGE              10962   // 7.0
#define IDS_TIP_NEXTCHANGE              10963   // 7.0
#define IDS_TIP_STOP                    10964   // 7.0
#define IDS_TIP_EXPAND                  10965   // 8.0
#define IDS_TIP_OUTLINE                 10966   // 8.0
//
// Color descriptions.
//
#define IDS_COLOR_TEXT                  10967
#define IDS_COLOR_SELTEXT               10968
#define IDS_COLOR_KEYWORD               10969
#define IDS_COLOR_COMMENT               10970
#define IDS_COLOR_NUMBER                10971
#define IDS_COLOR_STRING                10972
#define IDS_COLOR_PREPROCESSOR          10973
#define IDS_COLOR_FUNCTION              10974
#define IDS_COLOR_OPERATOR              10975
#define IDS_COLOR_BREAKPOINT            10976
#define IDS_COLOR_DEBUGLINE             10977
#define IDS_COLOR_PROFLINE              10978   // 6.50
#define IDS_COLOR_DIFFBLOB              10979   // 7.0
#define IDS_COLOR_DIFFLEFT              10980   // 7.0
#define IDS_COLOR_DIFFRIGHT             10981   // 7.0
#define IDS_COLORTABLE                  10982
//
// Encoding descriptions.
//
#define IDS_ENCODING_ANSI               10983   // 5.0 (#1)
#define IDS_ENCODING_OEM                10984   // 5.0 (#2)
#define IDS_ENCODING_UTF8               10985   // 5.0 (#3)
#define IDS_ENCODING_UTF8_NO_BOM        10986   // 5.0 (#4)
#define IDS_ENCODING_UTF16_LE           10987   // 5.0 (#5)
#define IDS_ENCODING_UTF16_BE           10988   // 5.0 (#6)
#define IDS_ENCODING_UTF32_LE           10989   // 5.0 (#7)
#define IDS_ENCODING_UTF32_BE           10990   // 5.0 (#8)
//
// Startup descriptions.
//
#define IDS_STARTUP_WELCOME             10991   // 7.0
#define IDS_STARTUP_PROJECT             10992   // 7.0
#define IDS_STARTUP_HOMEPAGE            10993   // 7.0
#define IDS_STARTUP_EMPTY               10994   // 7.0
//
#define IDS_DESC_GENERAL                10995
#define IDS_DESC_MYSTYLES               10996
#define IDS_DESC_STYLES                 10997
#define IDS_DESC_EXSTYLES               10998
#define IDS_DESC_RESIZER                10999   // 6.0
#define IDS_DESC_NAME                   11000
#define IDS_DESC_TEXT                   11001
#define IDS_DESC_ORDER                  11002
#define IDS_DESC_HELP                   11003   // 5.0
#define IDS_DESC_LEFT                   11004
#define IDS_DESC_TOP                    11005
#define IDS_DESC_WIDTH                  11006
#define IDS_DESC_HEIGHT                 11007
#define IDS_DESC_VERTRESIZER            11008   // 6.0
#define IDS_DESC_HORZRESIZER            11009   // 6.0
#define IDS_DESC_FONTNAME               11010
#define IDS_DESC_FONTSIZE               11011
#define IDS_DESC_FONTWEIGHT             11012
#define IDS_DESC_FONTCHARSET            11013
#define IDS_DESC_FONTITALIC             11014
#define IDS_DESC_CLASSNAME              11015
#define IDS_DESC_MENUNAME               11016
#define IDS_DESC_STYLE                  11017
#define IDS_DESC_ALIGNMENT              11018
#define IDS_DESC_TYPE                   11019
#define IDS_DESC_OWNERDRAW              11020
#define IDS_DESC_SELECTION              11021
#define IDS_DESC_POINT                  11022
#define IDS_DESC_VIEW                   11023
#define IDS_DESC_SORT                   11024
#define IDS_DESC_FOCUS                  11025
#define IDS_DESC_FORMAT                 11026
#define IDS_DESC_IMAGE                  11027
#define IDS_DESC_ELLIPSIS               11028
#define IDS_DESC_VERTALIGNMENT          11029
#define IDS_DESC_WS_OVERLAPPED          11030
#define IDS_DESC_WS_POPUP               11031
#define IDS_DESC_WS_CHILD               11032
#define IDS_DESC_WS_CAPTION             11033
#define IDS_DESC_WS_SYSMENU             11034
#define IDS_DESC_WS_VISIBLE             11035
#define IDS_DESC_WS_DISABLED            11036
#define IDS_DESC_WS_BORDER              11037
#define IDS_DESC_WS_GROUP               11038
#define IDS_DESC_WS_TABSTOP             11039
#define IDS_DESC_WS_HSCROLL             11040
#define IDS_DESC_WS_VSCROLL             11041
#define IDS_DESC_WS_MINIMIZEBOX         11042
#define IDS_DESC_WS_MAXIMIZEBOX         11043
#define IDS_DESC_WS_CLIPSIBLINGS        11044
#define IDS_DESC_WS_CLIPCHILDREN        11045
#define IDS_DESC_WS_THICKFRAME          11046
#define IDS_DESC_DS_MODALFRAME          11047
#define IDS_DESC_DS_SYSMODAL            11048
#define IDS_DESC_DS_ABSALIGN            11049
#define IDS_DESC_DS_CONTEXTHELP         11050
#define IDS_DESC_DS_SETFOREGROUND       11051
#define IDS_DESC_DS_3DLOOK              11052
#define IDS_DESC_DS_NOFAILCREATE        11053
#define IDS_DESC_DS_NOIDLEMSG           11054
#define IDS_DESC_DS_CONTROL             11055
#define IDS_DESC_DS_CENTER              11056
#define IDS_DESC_DS_CENTERMOUSE         11057
#define IDS_DESC_DS_LOCALEDIT           11058
#define IDS_DESC_SS_BITMAP              11059
#define IDS_DESC_SS_ICON                11060
#define IDS_DESC_SS_ENHMETAFILE         11061
#define IDS_DESC_SS_BLACKRECT           11062
#define IDS_DESC_SS_GRAYRECT            11063
#define IDS_DESC_SS_WHITERECT           11064
#define IDS_DESC_SS_BLACKFRAME          11065
#define IDS_DESC_SS_GRAYFRAME           11066
#define IDS_DESC_SS_WHITEFRAME          11067
#define IDS_DESC_SS_ETCHEDHORZ          11068
#define IDS_DESC_SS_ETCHEDVERT          11069
#define IDS_DESC_SS_ETCHEDFRAME         11070
#define IDS_DESC_SS_CENTERIMAGE         11071
#define IDS_DESC_SS_REALSIZEIMAGE       11072
#define IDS_DESC_SS_REALSIZECONTROL     11073   // 4.0
#define IDS_DESC_SS_SUNKEN              11074
#define IDS_DESC_SS_LEFT                11075
#define IDS_DESC_SS_CENTER              11076
#define IDS_DESC_SS_RIGHT               11077
#define IDS_DESC_SS_SIMPLE              11078
#define IDS_DESC_SS_LEFTNOWORDWRAP      11079
#define IDS_DESC_SS_OWNERDRAW           11080
#define IDS_DESC_SS_NOPREFIX            11081
#define IDS_DESC_SS_NOTIFY              11082
#define IDS_DESC_SS_RIGHTJUST           11083
#define IDS_DESC_SS_NOELLIPSIS          11084
#define IDS_DESC_SS_ENDELLIPSIS         11085
#define IDS_DESC_SS_PATHELLIPSIS        11086
#define IDS_DESC_SS_WORDELLIPSIS        11087
#define IDS_DESC_ES_LEFT                11088
#define IDS_DESC_ES_CENTER              11089
#define IDS_DESC_ES_RIGHT               11090
#define IDS_DESC_ES_MULTILINE           11091
#define IDS_DESC_ES_NUMBER              11092
#define IDS_DESC_ES_AUTOHSCROLL         11093
#define IDS_DESC_ES_AUTOVSCROLL         11094
#define IDS_DESC_ES_PASSWORD            11095
#define IDS_DESC_ES_NOHIDESEL           11096
#define IDS_DESC_ES_OEMCONVERT          11097
#define IDS_DESC_ES_WANTRETURN          11098
#define IDS_DESC_ES_UPPERCASE           11099
#define IDS_DESC_ES_LOWERCASE           11100
#define IDS_DESC_ES_READONLY            11101
#define IDS_DESC_ES_DISABLENOSCROLL     11102
#define IDS_DESC_BS_TEXT                11103
#define IDS_DESC_BS_ICON                11104
#define IDS_DESC_BS_BITMAP              11105
#define IDS_DESC_BS_NOTIFY              11106
#define IDS_DESC_BS_FLAT                11107
#define IDS_DESC_BS_PUSHBUTTON          11108
#define IDS_DESC_BS_DEFPUSHBUTTON       11109
#define IDS_DESC_BS_PUSHBOX             11110   // 5.0
#define IDS_DESC_BS_OWNERDRAW           11111
#define IDS_DESC_BS_MULTILINE           11112
#define IDS_DESC_BS_CHECKBOX            11113
#define IDS_DESC_BS_AUTOCHECKBOX        11114
#define IDS_DESC_BS_3STATE              11115
#define IDS_DESC_BS_AUTO3STATE          11116
#define IDS_DESC_BS_LEFTTEXT            11117
#define IDS_DESC_BS_PUSHLIKE            11118
#define IDS_DESC_BS_RADIOBUTTON         11119
#define IDS_DESC_BS_AUTORADIOBUTTON     11120
#define IDS_DESC_BS_LEFT                11121
#define IDS_DESC_BS_CENTER              11122
#define IDS_DESC_BS_RIGHT               11123
#define IDS_DESC_BS_TOP                 11124
#define IDS_DESC_BS_VCENTER             11125
#define IDS_DESC_BS_BOTTOM              11126
#define IDS_DESC_BS_NOALIGN             11127
#define IDS_DESC_BS_SPLITBUTTON         11128   // 5.0
#define IDS_DESC_BS_DEFSPLITBUTTON      11129   // 5.0
#define IDS_DESC_BS_COMMANDLINK         11130   // 5.0
#define IDS_DESC_BS_DEFCOMMANDLINK      11131   // 5.0
#define IDS_DESC_CBS_SIMPLE             11132
#define IDS_DESC_CBS_DROPDOWN           11133
#define IDS_DESC_CBS_DROPDOWNLIST       11134
#define IDS_DESC_OD_NO                  11135
#define IDS_DESC_OD_FIXED               11136
#define IDS_DESC_OD_VARIABLE            11137
#define IDS_DESC_CBS_AUTOHSCROLL        11138
#define IDS_DESC_CBS_OEMCONVERT         11139
#define IDS_DESC_CBS_SORT               11140
#define IDS_DESC_CBS_HASSTRINGS         11141
#define IDS_DESC_CBS_NOINTEGRALHEIGHT   11142
#define IDS_DESC_CBS_DISABLENOSCROLL    11143
#define IDS_DESC_CBS_UPPERCASE          11144
#define IDS_DESC_CBS_LOWERCASE          11145
#define IDS_DESC_LBS_SINGLESEL          11146
#define IDS_DESC_LBS_MULTIPLESEL        11147
#define IDS_DESC_LBS_EXTENDEDSEL        11148
#define IDS_DESC_LBS_NOSEL              11149
#define IDS_DESC_LBS_SORT               11150
#define IDS_DESC_LBS_HASSTRINGS         11151
#define IDS_DESC_LBS_NOINTEGRALHEIGHT   11152
#define IDS_DESC_LBS_DISABLENOSCROLL    11153
#define IDS_DESC_LBS_NOTIFY             11154
#define IDS_DESC_LBS_MULTICOLUMN        11155
#define IDS_DESC_LBS_NOREDRAW           11156
#define IDS_DESC_LBS_USETABSTOPS        11157
#define IDS_DESC_LBS_WANTKEYBOARDINPUT  11158
#define IDS_DESC_LBS_NODATA             11159
#define IDS_DESC_UDS_UNATTACHED         11160
#define IDS_DESC_UDS_ALIGNLEFT          11161
#define IDS_DESC_UDS_ALIGNRIGHT         11162
#define IDS_DESC_UDS_HORZ               11163
#define IDS_DESC_UDS_AUTOBUDDY          11164
#define IDS_DESC_UDS_SETBUDDYINT        11165
#define IDS_DESC_UDS_NOTHOUSANDS        11166
#define IDS_DESC_UDS_WRAP               11167
#define IDS_DESC_UDS_ARROWKEYS          11168
#define IDS_DESC_UDS_HOTTRACK           11169
#define IDS_DESC_PBS_VERTICAL           11170
#define IDS_DESC_PBS_SMOOTH             11171
#define IDS_DESC_PBS_MARQUEE            11172   // 4.0
#define IDS_DESC_TBS_BOTH               11173
#define IDS_DESC_TBS_LEFT               11174
#define IDS_DESC_TBS_RIGHT              11175
#define IDS_DESC_TBS_VERT               11176
#define IDS_DESC_TBS_NOTICKS            11177
#define IDS_DESC_TBS_AUTOTICKS          11178
#define IDS_DESC_TBS_ENABLESELRANGE     11179
#define IDS_DESC_TBS_FIXEDLENGTH        11180
#define IDS_DESC_TBS_NOTHUMB            11181
#define IDS_DESC_TBS_TOOLTIPS           11182
#define IDS_DESC_LVS_ICON               11183
#define IDS_DESC_LVS_SMALLICON          11184
#define IDS_DESC_LVS_LIST               11185
#define IDS_DESC_LVS_REPORT             11186
#define IDS_DESC_LVS_ALIGNTOP           11187
#define IDS_DESC_LVS_ALIGNLEFT          11188
#define IDS_DESC_LVS_NOSORT             11189
#define IDS_DESC_LVS_SORTASCENDING      11190
#define IDS_DESC_LVS_SORTDESCENDING     11191
#define IDS_DESC_LVS_SINGLESEL          11192
#define IDS_DESC_LVS_SHOWSELALWAYS      11193
#define IDS_DESC_LVS_AUTOARRANGE        11194
#define IDS_DESC_LVS_NOLABELWRAP        11195
#define IDS_DESC_LVS_EDITLABELS         11196
#define IDS_DESC_LVS_NOSCROLL           11197
#define IDS_DESC_LVS_NOCOLUMNHEADER     11198
#define IDS_DESC_LVS_NOSORTHEADER       11199
#define IDS_DESC_LVS_SHAREIMAGELISTS    11200
#define IDS_DESC_LVS_OWNERDRAWFIXED     11201
#define IDS_DESC_LVS_OWNERDATA          11202
#define IDS_DESC_TVS_HASBUTTONS         11203
#define IDS_DESC_TVS_HASLINES           11204
#define IDS_DESC_TVS_LINESATROOT        11205
#define IDS_DESC_TVS_EDITLABELS         11206
#define IDS_DESC_TVS_DISABLEDRAGDROP    11207
#define IDS_DESC_TVS_SHOWSELALWAYS      11208
#define IDS_DESC_TVS_NOTOOLTIPS         11209
#define IDS_DESC_TVS_CHECKBOXES         11210
#define IDS_DESC_TVS_TRACKSELECT        11211
#define IDS_DESC_TVS_SINGLEEXPAND       11212
#define IDS_DESC_TVS_INFOTIP            11213
#define IDS_DESC_TVS_FULLROWSELECT      11214
#define IDS_DESC_TVS_NOSCROLL           11215
#define IDS_DESC_TVS_NONEVENHEIGHT      11216
#define IDS_DESC_TCS_RIGHTJUSTIFY       11217
#define IDS_DESC_TCS_FIXEDWIDTH         11218
#define IDS_DESC_TCS_RAGGEDRIGHT        11219
#define IDS_DESC_TCS_FOCUSDEFAULT       11220
#define IDS_DESC_TCS_FOCUSONBUTTONDOWN  11221
#define IDS_DESC_TCS_FOCUSNEVER         11222
#define IDS_DESC_TCS_BUTTONS            11223
#define IDS_DESC_TCS_FLATBUTTONS        11224
#define IDS_DESC_TCS_TOOLTIPS           11225
#define IDS_DESC_TCS_MULTILINE          11226
#define IDS_DESC_TCS_OWNERDRAWFIXED     11227
#define IDS_DESC_TCS_FORCELABELLEFT     11228
#define IDS_DESC_TCS_FORCEICONLEFT      11229
#define IDS_DESC_TCS_HOTTRACK           11230
#define IDS_DESC_TCS_BOTTOM             11231
#define IDS_DESC_TCS_MULTISELECT        11232
#define IDS_DESC_TCS_SCROLLOPPOSITE     11233
#define IDS_DESC_TCS_VERTICAL           11234
#define IDS_DESC_ACS_CENTER             11235
#define IDS_DESC_ACS_TRANSPARENT        11236
#define IDS_DESC_ACS_AUTOPLAY           11237
#define IDS_DESC_ACS_TIMER              11238
#define IDS_DESC_DTS_SHORTDATEFORMAT    11239
#define IDS_DESC_DTS_LONGDATEFORMAT     11240
#define IDS_DESC_DTS_TIMEFORMAT         11241
#define IDS_DESC_DTS_RIGHTALIGN         11242
#define IDS_DESC_DTS_UPDOWN             11243
#define IDS_DESC_DTS_SHOWNONE           11244
#define IDS_DESC_MCS_DAYSTATE           11245
#define IDS_DESC_MCS_MULTISELECT        11246
#define IDS_DESC_MCS_WEEKNUMBERS        11247
#define IDS_DESC_MCS_NOTODAYCIRCLE      11248
#define IDS_DESC_MCS_NOTODAY            11249
#define IDS_DESC_CCS_NORESIZE           11250
#define IDS_DESC_CCS_TOP                11251
#define IDS_DESC_CCS_BOTTOM             11252
#define IDS_DESC_CCS_LEFT               11253
#define IDS_DESC_CCS_RIGHT              11254
#define IDS_DESC_CCS_NODIVIDER          11255
#define IDS_DESC_CCS_ADJUSTABLE         11256
#define IDS_DESC_RBS_VARHEIGHT          11257
#define IDS_DESC_RBS_BANDBORDERS        11258
#define IDS_DESC_RBS_FIXEDORDER         11259
#define IDS_DESC_RBS_REGISTERDROP       11260
#define IDS_DESC_RBS_AUTOSIZE           11261
#define IDS_DESC_RBS_VERTICALGRIPPER    11262
#define IDS_DESC_RBS_DBLCLKTOGGLE       11263
#define IDS_DESC_PGS_HORZ               11264
#define IDS_DESC_PGS_AUTOSCROLL         11265
#define IDS_DESC_PGS_DRAGNDROP          11266
#define IDS_DESC_TBSTYLE_FLAT           11267
#define IDS_DESC_TBSTYLE_LIST           11268
#define IDS_DESC_TBSTYLE_WRAPABLE       11269
#define IDS_DESC_TBSTYLE_TRANSPARENT    11270
#define IDS_DESC_TBSTYLE_TOOLTIPS       11271
#define IDS_DESC_TBSTYLE_ALTDRAG        11272
#define IDS_DESC_TBSTYLE_CUSTOMERASE    11273
#define IDS_DESC_TBSTYLE_REGISTERDROP   11274
#define IDS_DESC_SBARS_SIZEGRIP         11275
#define IDS_DESC_LWS_TRANSPARENT        11276   // 5.0
#define IDS_DESC_LWS_IGNORERETURN       11277   // 5.0
#define IDS_DESC_LWS_NOPREFIX           11278   // 5.0
#define IDS_DESC_LWS_USEVISUALSTYLE     11279   // 5.0
#define IDS_DESC_LWS_USECUSTOMTEXT      11280   // 5.0
#define IDS_DESC_LWS_RIGHT              11281   // 5.0
#define IDS_DESC_NFS_EDIT               11282   // 5.0
#define IDS_DESC_NFS_STATIC             11283   // 5.0
#define IDS_DESC_NFS_LISTCOMBO          11284   // 5.0
#define IDS_DESC_NFS_BUTTON             11285   // 5.0
#define IDS_DESC_NFS_ALL                11286   // 5.0
#define IDS_DESC_NFS_USEFONTASSOC       11287   // 5.0
#define IDS_DESC_WS_EX_CLIENTEDGE       11288
#define IDS_DESC_WS_EX_STATICEDGE       11289
#define IDS_DESC_WS_EX_TRANSPARENT      11290
#define IDS_DESC_WS_EX_ACCEPTFILES      11291
#define IDS_DESC_WS_EX_RIGHT            11292
#define IDS_DESC_WS_EX_LEFTSCROLLBAR    11293
#define IDS_DESC_WS_EX_TOOLWINDOW       11294
#define IDS_DESC_WS_EX_CONTROLPARENT    11295
#define IDS_DESC_WS_EX_CONTEXTHELP      11296
#define IDS_DESC_WS_EX_NOPARENTNOTIFY   11297
#define IDS_DESC_WS_EX_APPWINDOW        11298   // 4.0
#define IDS_DESC_WS_EX_TOPMOST          11299   // 4.0
#define IDS_DESC_WS_EX_NOACTIVATE       11300   // 4.0
#define IDS_HELP_NAME                   11301
#define IDS_HELP_TEXT                   11302
#define IDS_HELP_ORDER                  11303
#define IDS_HELP_HELP                   11304   // 5.0
#define IDS_HELP_LEFT                   11305
#define IDS_HELP_TOP                    11306
#define IDS_HELP_WIDTH                  11307
#define IDS_HELP_HEIGHT                 11308
#define IDS_HELP_VERTRESIZER            11309   // 6.0
#define IDS_HELP_HORZRESIZER            11310   // 6.0
#define IDS_HELP_FONTNAME               11311
#define IDS_HELP_FONTSIZE               11312
#define IDS_HELP_FONTWEIGHT             11313
#define IDS_HELP_FONTCHARSET            11314
#define IDS_HELP_FONTITALIC             11315
#define IDS_HELP_CLASSNAME              11316
#define IDS_HELP_MENUNAME               11317
#define IDS_HELP_STYLES                 11318   // 4.0
#define IDS_HELP_EXSTYLES               11319   // 4.0
#define IDS_HELP_STYLE                  11320
#define IDS_HELP_ALIGNMENT              11321
#define IDS_HELP_TYPE                   11322
#define IDS_HELP_OWNERDRAW              11323
#define IDS_HELP_SELECTION              11324
#define IDS_HELP_POINT                  11325
#define IDS_HELP_VIEW                   11326
#define IDS_HELP_SORT                   11327
#define IDS_HELP_FOCUS                  11328
#define IDS_HELP_FORMAT                 11329
#define IDS_HELP_IMAGE                  11330
#define IDS_HELP_ELLIPSIS               11331
#define IDS_HELP_VERTALIGNMENT          11332
#define IDS_HELP_WS_CAPTION             11333
#define IDS_HELP_WS_SYSMENU             11334
#define IDS_HELP_WS_VISIBLE             11335
#define IDS_HELP_WS_DISABLED            11336
#define IDS_HELP_WS_BORDER              11337
#define IDS_HELP_WS_GROUP               11338
#define IDS_HELP_WS_TABSTOP             11339
#define IDS_HELP_WS_HSCROLL             11340
#define IDS_HELP_WS_VSCROLL             11341
#define IDS_HELP_WS_MINIMIZEBOX         11342
#define IDS_HELP_WS_MAXIMIZEBOX         11343
#define IDS_HELP_WS_CLIPSIBLINGS        11344
#define IDS_HELP_WS_CLIPCHILDREN        11345
#define IDS_HELP_WS_THICKFRAME          11346
#define IDS_HELP_DS_MODALFRAME          11347
#define IDS_HELP_DS_SYSMODAL            11348
#define IDS_HELP_DS_ABSALIGN            11349
#define IDS_HELP_DS_CONTEXTHELP         11350
#define IDS_HELP_DS_SETFOREGROUND       11351
#define IDS_HELP_DS_3DLOOK              11352
#define IDS_HELP_DS_NOFAILCREATE        11353
#define IDS_HELP_DS_NOIDLEMSG           11354
#define IDS_HELP_DS_CONTROL             11355
#define IDS_HELP_DS_CENTER              11356
#define IDS_HELP_DS_CENTERMOUSE         11357
#define IDS_HELP_DS_LOCALEDIT           11358
#define IDS_HELP_SS_CENTERIMAGE         11359
#define IDS_HELP_SS_REALSIZEIMAGE       11360
#define IDS_HELP_SS_REALSIZECONTROL     11361   // 4.0
#define IDS_HELP_SS_SUNKEN              11362
#define IDS_HELP_SS_SIMPLE              11363
#define IDS_HELP_SS_LEFTNOWORDWRAP      11364
#define IDS_HELP_SS_OWNERDRAW           11365
#define IDS_HELP_SS_NOPREFIX            11366
#define IDS_HELP_SS_NOTIFY              11367
#define IDS_HELP_SS_RIGHTJUST           11368
#define IDS_HELP_ES_MULTILINE           11369
#define IDS_HELP_ES_NUMBER              11370
#define IDS_HELP_ES_AUTOHSCROLL         11371
#define IDS_HELP_ES_AUTOVSCROLL         11372
#define IDS_HELP_ES_PASSWORD            11373
#define IDS_HELP_ES_NOHIDESEL           11374
#define IDS_HELP_ES_OEMCONVERT          11375
#define IDS_HELP_ES_WANTRETURN          11376
#define IDS_HELP_ES_UPPERCASE           11377
#define IDS_HELP_ES_LOWERCASE           11378
#define IDS_HELP_ES_READONLY            11379
#define IDS_HELP_ES_DISABLENOSCROLL     11380
#define IDS_HELP_BS_NOTIFY              11381
#define IDS_HELP_BS_FLAT                11382
#define IDS_HELP_BS_MULTILINE           11383
#define IDS_HELP_BS_LEFTTEXT            11384
#define IDS_HELP_BS_PUSHLIKE            11385
#define IDS_HELP_CBS_AUTOHSCROLL        11386
#define IDS_HELP_CBS_OEMCONVERT         11387
#define IDS_HELP_CBS_SORT               11388
#define IDS_HELP_CBS_HASSTRINGS         11389
#define IDS_HELP_CBS_NOINTEGRALHEIGHT   11390
#define IDS_HELP_CBS_DISABLENOSCROLL    11391
#define IDS_HELP_CBS_UPPERCASE          11392
#define IDS_HELP_CBS_LOWERCASE          11393
#define IDS_HELP_LBS_SORT               11394
#define IDS_HELP_LBS_HASSTRINGS         11395
#define IDS_HELP_LBS_NOINTEGRALHEIGHT   11396
#define IDS_HELP_LBS_DISABLENOSCROLL    11397
#define IDS_HELP_LBS_NOTIFY             11398
#define IDS_HELP_LBS_MULTICOLUMN        11399
#define IDS_HELP_LBS_NOREDRAW           11400
#define IDS_HELP_LBS_USETABSTOPS        11401
#define IDS_HELP_LBS_WANTKEYBOARDINPUT  11402
#define IDS_HELP_LBS_NODATA             11403
#define IDS_HELP_UDS_HORZ               11404
#define IDS_HELP_UDS_AUTOBUDDY          11405
#define IDS_HELP_UDS_SETBUDDYINT        11406
#define IDS_HELP_UDS_NOTHOUSANDS        11407
#define IDS_HELP_UDS_WRAP               11408
#define IDS_HELP_UDS_ARROWKEYS          11409
#define IDS_HELP_UDS_HOTTRACK           11410
#define IDS_HELP_PBS_VERTICAL           11411
#define IDS_HELP_PBS_SMOOTH             11412
#define IDS_HELP_PBS_MARQUEE            11413   // 4.0
#define IDS_HELP_TBS_VERT               11414
#define IDS_HELP_TBS_NOTICKS            11415
#define IDS_HELP_TBS_AUTOTICKS          11416
#define IDS_HELP_TBS_ENABLESELRANGE     11417
#define IDS_HELP_TBS_FIXEDLENGTH        11418
#define IDS_HELP_TBS_NOTHUMB            11419
#define IDS_HELP_TBS_TOOLTIPS           11420
#define IDS_HELP_LVS_SINGLESEL          11421
#define IDS_HELP_LVS_SHOWSELALWAYS      11422
#define IDS_HELP_LVS_AUTOARRANGE        11423
#define IDS_HELP_LVS_NOLABELWRAP        11424
#define IDS_HELP_LVS_EDITLABELS         11425
#define IDS_HELP_LVS_NOSCROLL           11426
#define IDS_HELP_LVS_NOCOLUMNHEADER     11427
#define IDS_HELP_LVS_NOSORTHEADER       11428
#define IDS_HELP_LVS_SHAREIMAGELISTS    11429
#define IDS_HELP_LVS_OWNERDRAWFIXED     11430
#define IDS_HELP_LVS_OWNERDATA          11431
#define IDS_HELP_TVS_HASBUTTONS         11432
#define IDS_HELP_TVS_HASLINES           11433
#define IDS_HELP_TVS_LINESATROOT        11434
#define IDS_HELP_TVS_EDITLABELS         11435
#define IDS_HELP_TVS_DISABLEDRAGDROP    11436
#define IDS_HELP_TVS_SHOWSELALWAYS      11437
#define IDS_HELP_TVS_NOTOOLTIPS         11438
#define IDS_HELP_TVS_CHECKBOXES         11439
#define IDS_HELP_TVS_TRACKSELECT        11440
#define IDS_HELP_TVS_SINGLEEXPAND       11441
#define IDS_HELP_TVS_INFOTIP            11442
#define IDS_HELP_TVS_FULLROWSELECT      11443
#define IDS_HELP_TVS_NOSCROLL           11444
#define IDS_HELP_TVS_NONEVENHEIGHT      11445
#define IDS_HELP_TCS_BUTTONS            11446
#define IDS_HELP_TCS_FLATBUTTONS        11447
#define IDS_HELP_TCS_TOOLTIPS           11448
#define IDS_HELP_TCS_MULTILINE          11449
#define IDS_HELP_TCS_OWNERDRAWFIXED     11450
#define IDS_HELP_TCS_FORCELABELLEFT     11451
#define IDS_HELP_TCS_FORCEICONLEFT      11452
#define IDS_HELP_TCS_HOTTRACK           11453
#define IDS_HELP_TCS_BOTTOM             11454
#define IDS_HELP_TCS_MULTISELECT        11455
#define IDS_HELP_TCS_SCROLLOPPOSITE     11456
#define IDS_HELP_TCS_VERTICAL           11457
#define IDS_HELP_ACS_CENTER             11458
#define IDS_HELP_ACS_TRANSPARENT        11459
#define IDS_HELP_ACS_AUTOPLAY           11460
#define IDS_HELP_ACS_TIMER              11461
#define IDS_HELP_DTS_RIGHTALIGN         11462
#define IDS_HELP_DTS_UPDOWN             11463
#define IDS_HELP_DTS_SHOWNONE           11464
#define IDS_HELP_MCS_DAYSTATE           11465
#define IDS_HELP_MCS_MULTISELECT        11466
#define IDS_HELP_MCS_WEEKNUMBERS        11467
#define IDS_HELP_MCS_NOTODAYCIRCLE      11468
#define IDS_HELP_MCS_NOTODAY            11469
#define IDS_HELP_CCS_NORESIZE           11470
#define IDS_HELP_CCS_TOP                11471
#define IDS_HELP_CCS_BOTTOM             11472
#define IDS_HELP_CCS_LEFT               11473
#define IDS_HELP_CCS_RIGHT              11474
#define IDS_HELP_CCS_NODIVIDER          11475
#define IDS_HELP_CCS_ADJUSTABLE         11476
#define IDS_HELP_RBS_VARHEIGHT          11477
#define IDS_HELP_RBS_BANDBORDERS        11478
#define IDS_HELP_RBS_FIXEDORDER         11479
#define IDS_HELP_RBS_REGISTERDROP       11480
#define IDS_HELP_RBS_AUTOSIZE           11481
#define IDS_HELP_RBS_VERTICALGRIPPER    11482
#define IDS_HELP_RBS_DBLCLKTOGGLE       11483
#define IDS_HELP_PGS_HORZ               11484
#define IDS_HELP_PGS_AUTOSCROLL         11485
#define IDS_HELP_PGS_DRAGNDROP          11486
#define IDS_HELP_TBSTYLE_FLAT           11487
#define IDS_HELP_TBSTYLE_LIST           11488
#define IDS_HELP_TBSTYLE_WRAPABLE       11489
#define IDS_HELP_TBSTYLE_TRANSPARENT    11490
#define IDS_HELP_TBSTYLE_TOOLTIPS       11491
#define IDS_HELP_TBSTYLE_ALTDRAG        11492
#define IDS_HELP_TBSTYLE_CUSTOMERASE    11493
#define IDS_HELP_TBSTYLE_REGISTERDROP   11494
#define IDS_HELP_SBARS_SIZEGRIP         11495
#define IDS_HELP_LWS_TRANSPARENT        11496   // 5.0
#define IDS_HELP_LWS_IGNORERETURN       11497   // 5.0
#define IDS_HELP_LWS_NOPREFIX           11498   // 5.0
#define IDS_HELP_LWS_USEVISUALSTYLE     11499   // 5.0
#define IDS_HELP_LWS_USECUSTOMTEXT      11500   // 5.0
#define IDS_HELP_LWS_RIGHT              11501   // 5.0
#define IDS_HELP_NFS_EDIT               11502   // 5.0
#define IDS_HELP_NFS_STATIC             11503   // 5.0
#define IDS_HELP_NFS_LISTCOMBO          11504   // 5.0
#define IDS_HELP_NFS_BUTTON             11505   // 5.0
#define IDS_HELP_NFS_ALL                11506   // 5.0
#define IDS_HELP_NFS_USEFONTASSOC       11507   // 5.0
#define IDS_HELP_WS_EX_CLIENTEDGE       11508
#define IDS_HELP_WS_EX_STATICEDGE       11509
#define IDS_HELP_WS_EX_TRANSPARENT      11510
#define IDS_HELP_WS_EX_ACCEPTFILES      11511
#define IDS_HELP_WS_EX_RIGHT            11512
#define IDS_HELP_WS_EX_LEFTSCROLLBAR    11513
#define IDS_HELP_WS_EX_TOOLWINDOW       11514
#define IDS_HELP_WS_EX_CONTROLPARENT    11515
#define IDS_HELP_WS_EX_CONTEXTHELP      11516
#define IDS_HELP_WS_EX_NOPARENTNOTIFY   11517
#define IDS_HELP_WS_EX_APPWINDOW        11518   // 4.0
#define IDS_HELP_WS_EX_TOPMOST          11519   // 4.0
#define IDS_HELP_WS_EX_NOACTIVATE       11520   // 4.0

#define IDS_ERR_CANTREADFILE            11521
#define IDS_ERR_CANTWRITEFILE           11522
#define IDS_ERR_LINETOOLONG             11523
#define IDS_ERR_INVALIDCHAR             11524
#define IDS_ERR_BADFILEFORMAT           11525
#define IDS_ERR_BADIMAGEFORMAT          11526
#define IDS_ERR_BADRSRCFORMAT           11527
#define IDS_ERR_BADSYNTAX               11528
#define IDS_ERR_OS2BITMAP               11529
#define IDS_ERR_UNKNOWNCODEC            11530
#define IDS_ERR_CODECERROR              11531
#define IDS_ERR_INVALIDVIDEO            11532
#define IDS_ERR_WFPPROTECTED            11533
#define IDS_ERR_TOOMANYCOLORS           11534
#define IDS_ERR_TIMESTAMP               11535
#define IDS_ERR_BADEXECFORMAT           11536   // 5.0
#define IDS_ERR_CORRUPTMMFREGION        11537   // 6.50

#define IDS_DIFF_ONLY_IN                11538   // 7.0
#define IDS_DIFF_DIFFERENT              11539   // 7.0
#define IDS_DIFF_IDENTICAL              11540   // 7.0
#define IDS_DIFF_SAME_SIZE              11541   // 7.0
#define IDS_DIFF_IDENTICAL_TIMES        11542   // 7.0
#define IDS_DIFF_IN_BLANKS_ONLY         11543   // 7.0
#define IDS_DIFF_BOTH_UNREADABLE        11544   // 7.0
#define IDS_DIFF_LEFT_UNREADABLE        11545   // 7.0
#define IDS_DIFF_RIGHT_UNREADABLE       11546   // 7.0
#define IDS_DIFF_UNREADABLE             11547   // 7.0
#define IDS_DIFF_IS_MORE_RECENT         11548   // 7.0

#define CSTRINGS                        1548    // Number of strings

//
// Menu ID's ----------------------------------------------------------------
//

//
// File menu.
//
#define IDM_FILE_NEWPROJECT         6001
#define IDM_FILE_NEWSOURCE          6002
#define IDM_FILE_NEWRESOURCE        6003
#define IDM_FILE_NEWBITMAP          6004
#define IDM_FILE_NEWICON            6005
#define IDM_FILE_NEWCURSOR          6006
#define IDM_FILE_NEWANICURSOR       6007
#define IDM_FILE_NEWVIDEO           6008
#define IDM_FILE_NEWHEXDUMP         6009
#define IDM_FILE_NEWMSGTABLE        6010    // 3.0
#define IDM_FILE_NEWWEB             6011    // 7.0
#define IDM_FILE_NEWDIFF            6012    // 7.0
#define IDM_FILE_NEWADDIN           6013    // 8.0
#define IDM_FILE_OPEN               6014
#define IDM_FILE_OPENPROJ           6015    // 7.0 (Welcome page only)
#define IDM_FILE_CLOSE              6016
#define IDM_FILE_CLOSEPROJ          6017    // 5.0
#define IDM_FILE_SAVE               6018
#define IDM_FILE_SAVEAS             6019
#define IDM_FILE_SAVEALL            6020
#define IDM_FILE_PRINT              6021
#define IDM_FILE_PRINTSETUP         6022
#define IDM_FILE_PROPERTIES         6023
#define IDM_FILE_EXIT               6024
#define IDM_FILE_ADDIN              6025    // (placeholder, never used)
#define IDM_FILE_MRUFILE            6026    // room for 8 files.
#define IDM_FILE_MRUFILE_1          6027    // (placeholder, never used)
#define IDM_FILE_MRUFILE_2          6028    // (placeholder, never used)
#define IDM_FILE_MRUFILE_3          6029    // (placeholder, never used)
#define IDM_FILE_MRUFILE_4          6030    // (placeholder, never used)
#define IDM_FILE_MRUFILE_5          6031    // (placeholder, never used)
#define IDM_FILE_MRUFILE_6          6032    // (placeholder, never used)
#define IDM_FILE_MRUFILE_7          6033    // (placeholder, never used)
#define IDM_FILE_MRUFILE_8          6034    // (placeholder, never used)
#define IDM_FILE_MRUPROJ            6035    // room for 8 projects.
#define IDM_FILE_MRUPROJ_1          6036    // (placeholder, never used)
#define IDM_FILE_MRUPROJ_2          6037    // (placeholder, never used)
#define IDM_FILE_MRUPROJ_3          6038    // (placeholder, never used)
#define IDM_FILE_MRUPROJ_4          6039    // (placeholder, never used)
#define IDM_FILE_MRUPROJ_5          6040    // (placeholder, never used)
#define IDM_FILE_MRUPROJ_6          6041    // (placeholder, never used)
#define IDM_FILE_MRUPROJ_7          6042    // (placeholder, never used)
#define IDM_FILE_MRUPROJ_8          6043    // (placeholder, never used)
#define IDM_FILE_MRULINK            6044    // room for 8 links (7.0).
#define IDM_FILE_MRULINK_1          6045    // (placeholder, never used)
#define IDM_FILE_MRULINK_2          6046    // (placeholder, never used)
#define IDM_FILE_MRULINK_3          6047    // (placeholder, never used)
#define IDM_FILE_MRULINK_4          6048    // (placeholder, never used)
#define IDM_FILE_MRULINK_5          6049    // (placeholder, never used)
#define IDM_FILE_MRULINK_6          6050    // (placeholder, never used)
#define IDM_FILE_MRULINK_7          6051    // (placeholder, never used)
#define IDM_FILE_MRULINK_8          6052    // (placeholder, never used)
//
// Edit menu.
//
#define IDM_EDIT_UNDO               6053
#define IDM_EDIT_REDO               6054
#define IDM_EDIT_CUT                6055
#define IDM_EDIT_COPY               6056
#define IDM_EDIT_PASTE              6057
#define IDM_EDIT_INSERT             6058
#define IDM_EDIT_DELETE             6059
#define IDM_EDIT_DELETEWORD         6060
#define IDM_EDIT_SELECTALL          6061
#define IDM_EDIT_FIND               6062
#define IDM_EDIT_FINDNEXT           6063
#define IDM_EDIT_REPLACE            6064
#define IDM_EDIT_FILEFIND           6065
#define IDM_EDIT_GOTO               6066
#define IDM_EDIT_ADDIN              6067    // (placeholder, never used)
//
// View menu.
//
#define IDM_VIEW_SOURCEFILES        6068    // 5.0
#define IDM_VIEW_TARGETFILES        6069    // 5.0
#define IDM_VIEW_PROJECT            6070    // 5.0
#define IDM_VIEW_FILEFIND           6071    // 5.0
#define IDM_VIEW_OUTPUT             6072    // 5.0
#define IDM_VIEW_TRACE              6073    // 5.0
#define IDM_VIEW_BREAKPOINTS        6074    // 5.0
#define IDM_VIEW_AUTO               6075    // 5.0
#define IDM_VIEW_WATCH              6076    // 5.0
#define IDM_VIEW_LOCALS             6077    // 5.0
#define IDM_VIEW_GLOBALS            6078    // 5.0
#define IDM_VIEW_REGISTERS          6079    // 5.0
#define IDM_VIEW_STACK              6080    // 5.0
#define IDM_VIEW_MEMORY             6081    // 5.0
#define IDM_VIEW_THREADS            6082    // 5.0
#define IDM_VIEW_MODULES            6083    // 5.0
#define IDM_VIEW_EXCEPTIONS         6084    // 5.0
#define IDM_VIEW_HELPCONTENTS       6085    // 7.0
#define IDM_VIEW_HELPINDEX          6086    // 7.0
#define IDM_VIEW_HELPSEARCH         6087    // 8.0
#define IDM_VIEW_OUTLINE            6088    // 7.0
#define IDM_VIEW_EXPAND             6089    // 7.0
#define IDM_VIEW_SHOWTOOLBAR        6090
#define IDM_VIEW_SHOWSTATUSBAR      6091
#define IDM_VIEW_SHOWDOCTABS        6092
#define IDM_VIEW_SHOWWELCOME        6093    // 7.0
#define IDM_VIEW_TOGGLEFULLSCREEN   6094    // 8.0
#define IDM_VIEW_TOGGLEPROJPANE     6095    // 4.0 (hidden)
#define IDM_VIEW_TABPAGES           6096    // 5.0 (placeholder, never used)
#define IDM_VIEW_ADDIN              6097    // (placeholder, never used)
//
// Project menu.
//
#define IDM_PROJ_BUILD              6098    // Project menu.
#define IDM_PROJ_REBUILD            6099    // Project menu (5.0: IDM_PROJ_BUILDALL -> IDM_PROJ_REBUILD).
#define IDM_PROJ_BUILDWKS           6100    // Project menu (5.0).
#define IDM_PROJ_REBUILDWKS         6101    // Project menu (5.0).
#define IDM_PROJ_COMPILE            6102    // Project menu.
#define IDM_PROJ_STOPBUILD          6103    // Project menu.
#define IDM_PROJ_EXECUTE            6104    // Project menu.
#define IDM_PROJ_PROFILE            6105    // Project menu (6.50).
#define IDM_PROJ_ADDFILE            6106    // Project menu.
#define IDM_PROJ_ADDPROJECT         6107    // Project menu (4.0).
#define IDM_PROJ_MAKEALLPREQS       6108    // Project menu.
#define IDM_PROJ_ZIP                6109    // Project menu.
#define IDM_PROJ_UNZIP              6110    // Project menu.
#define IDM_PROJ_SETACTIVE          6111    // Project menu (4.0).
#define IDM_PROJ_DEPENDENCIES       6112    // Project menu (4.0).
#define IDM_PROJ_SETTINGS           6113    // Project menu.
#define IDM_PROJ_WORKSPACE          6114    // Project menu (4.0).
#define IDM_PROJ_CTX_OPEN           6115    // Context menu (4.0).
#define IDM_PROJ_CTX_OPENAS_TEXT    6116    // Context menu (5.0).
#define IDM_PROJ_CTX_OPENAS_BINARY  6117    // Context menu (5.0).
#define IDM_PROJ_CTX_OPENFUNC       6118    // Context menu (8.0).
#define IDM_PROJ_CTX_ADDFILE        6119    // Context menu (4.0).
#define IDM_PROJ_CTX_DELETE         6120    // Context menu (4.0).
#define IDM_PROJ_CTX_RENAME         6121    // Context menu (4.0).
#define IDM_PROJ_CTX_EXCLUDE        6122    // Context menu (4.0).
#define IDM_PROJ_CTX_ZIP            6123    // Context menu (4.0).
#define IDM_PROJ_CTX_UNZIP          6124    // Context menu (4.0).
#define IDM_PROJ_CTX_SETACTIVE      6125    // Context menu (4.0).
#define IDM_PROJ_CTX_MAKEALLPREQS   6126    // Context menu (4.0).
#define IDM_PROJ_CTX_SORTFUNCS      6127    // Context menu (4.0).
#define IDM_PROJ_CTX_SETTINGS       6128    // Context menu (4.0).
#define IDM_PROJ_CTX_PROPERTIES     6129    // Context menu (4.0).
#define IDM_PROJ_CTX_BUILD          6130    // Context menu (4.0).
#define IDM_PROJ_CTX_REBUILD        6131    // Context menu (4.0) (5.0: IDM_PROJ_CTX_FORCEBUILD -> IDM_PROJ_CTX_REBUILD).
#define IDM_PROJ_CTX_EXECUTE        6132    // Context menu (4.0).
#define IDM_PROJ_CTX_DEBUG          6133    // Context menu (4.0).
#define IDM_PROJ_CTX_MAKETARGPREQS  6134    // Context menu (4.0).
#define IDM_PROJ_CTX_TOGGLEPANE     6135    // Context menu (4.0).
#define IDM_PROJ_CTX_PROFILE        6136    // Context menu (6.50).
#define IDM_PROJ_CTX_MAKEWKSPREQS   6137    // Context menu (7.00).
#define IDM_PROJ_CTX_CLEAN          6138    // Project menu (7.00).
#define IDM_PROJ_CTX_CLEANWKS       6139    // Project menu (7.00).
#define IDM_PROJ_ADDIN              6140    // (placeholder, never used)
#define IDM_PROJ_ADDIN_CTX          6141    // (placeholder, never used)
//
// Tools window.
//
#define IDM_TOOL_CUSTOMIZE          6142
#define IDM_TOOL_SETTINGS           6143
#define IDM_TOOL_CUSTOMTOOL         6144    // room for 16 tools.
#define IDM_TOOL_CUSTOMTOOL_1       6145    // (placeholder, never used)
#define IDM_TOOL_CUSTOMTOOL_2       6146    // (placeholder, never used)
#define IDM_TOOL_CUSTOMTOOL_3       6147    // (placeholder, never used)
#define IDM_TOOL_CUSTOMTOOL_4       6148    // (placeholder, never used)
#define IDM_TOOL_CUSTOMTOOL_5       6149    // (placeholder, never used)
#define IDM_TOOL_CUSTOMTOOL_6       6150    // (placeholder, never used)
#define IDM_TOOL_CUSTOMTOOL_7       6151    // (placeholder, never used)
#define IDM_TOOL_CUSTOMTOOL_8       6152    // (placeholder, never used) (5.0)
#define IDM_TOOL_CUSTOMTOOL_9       6153    // (placeholder, never used) (5.0)
#define IDM_TOOL_CUSTOMTOOL_10      6154    // (placeholder, never used) (5.0)
#define IDM_TOOL_CUSTOMTOOL_11      6155    // (placeholder, never used) (5.0)
#define IDM_TOOL_CUSTOMTOOL_12      6156    // (placeholder, never used) (5.0)
#define IDM_TOOL_CUSTOMTOOL_13      6157    // (placeholder, never used) (5.0)
#define IDM_TOOL_CUSTOMTOOL_14      6158    // (placeholder, never used) (5.0)
#define IDM_TOOL_CUSTOMTOOL_15      6159    // (placeholder, never used) (5.0)
//
// Window menu.
//
#define IDM_WIN_NEW                 6160
#define IDM_WIN_CASCADE             6161
#define IDM_WIN_TILEVERT            6162
#define IDM_WIN_TILEHORZ            6163
#define IDM_WIN_CLOSEALL            6164
//
// Help menu.
//
#define IDM_HELP_CONTENTS           6165
#define IDM_HELP_CUSTOM             6166    // (placeholder, never used) (5.0)
#define IDM_HELP_WEB_FORUM          6167    // 3.0
#define IDM_HELP_WEB_SOURCECODE     6168    // 3.0
#define IDM_HELP_WEB_DONATE         6169    // 3.0
#define IDM_HELP_WEB_ADDIN          6170    // (placeholder, never used)
#define IDM_HELP_ABOUT              6171
#define IDM_HELP_CUSTOMHELP         6172    // room for 16 help files.
#define IDM_HELP_CUSTOMHELP_1       6173    // (placeholder, never used)
#define IDM_HELP_CUSTOMHELP_2       6174    // (placeholder, never used)
#define IDM_HELP_CUSTOMHELP_3       6175    // (placeholder, never used)
#define IDM_HELP_CUSTOMHELP_4       6176    // (placeholder, never used)
#define IDM_HELP_CUSTOMHELP_5       6177    // (placeholder, never used)
#define IDM_HELP_CUSTOMHELP_6       6178    // (placeholder, never used)
#define IDM_HELP_CUSTOMHELP_7       6179    // (placeholder, never used)
#define IDM_HELP_CUSTOMHELP_8       6180    // (placeholder, never used) (5.0)
#define IDM_HELP_CUSTOMHELP_9       6181    // (placeholder, never used) (5.0)
#define IDM_HELP_CUSTOMHELP_10      6182    // (placeholder, never used) (5.0)
#define IDM_HELP_CUSTOMHELP_11      6183    // (placeholder, never used) (5.0)
#define IDM_HELP_CUSTOMHELP_12      6184    // (placeholder, never used) (5.0)
#define IDM_HELP_CUSTOMHELP_13      6185    // (placeholder, never used) (5.0)
#define IDM_HELP_CUSTOMHELP_14      6186    // (placeholder, never used) (5.0)
#define IDM_HELP_CUSTOMHELP_15      6187    // (placeholder, never used) (5.0)
#define IDM_HELP_ADDIN              6188    // (placeholder, never used)
//
// Image/Dialog/Resource/Animation/Source/Debug/Web/Difference window.
//
#define IDM_IMG_NEWIMAGE            6189
#define IDM_IMG_DELETEIMAGE         6190
#define IDM_IMG_RESIZE              6191    // 5.0
#define IDM_IMG_MIRROR_HORZ         6192
#define IDM_IMG_MIRROR_VERT         6193
#define IDM_IMG_ROTATE              6194
#define IDM_IMG_GRAYSCALE           6195
#define IDM_IMG_SEPIATONE           6196    // 4.0
#define IDM_IMG_HSV                 6197
#define IDM_IMG_OPAQUEALPHA         6198    // 4.0
#define IDM_IMG_EFFECT_OILPAINT     6199
#define IDM_IMG_EFFECT_SPREAD       6200
#define IDM_IMG_EFFECT_EMBOSS       6201
#define IDM_IMG_EFFECT_FISHEYE      6202
#define IDM_IMG_EFFECT_DROPSHADOW   6203    // 4.0
#define IDM_IMG_EFFECT_BLUR         6204
#define IDM_IMG_EFFECT_SHARPEN      6205
//
#define IDM_DLG_NEWPICTURE          6206    // 4.50
#define IDM_DLG_NEWTEXT             6207    // 4.50
#define IDM_DLG_NEWEDITBOX          6208    // 4.50
#define IDM_DLG_NEWGROUPBOX         6209    // 4.50
#define IDM_DLG_NEWPUSHBUTTON       6210    // 4.50
#define IDM_DLG_NEWCHECKBOX         6211    // 4.50
#define IDM_DLG_NEWRADIOBUTTON      6212    // 4.50
#define IDM_DLG_NEWCOMBOBOX         6213    // 4.50
#define IDM_DLG_NEWLISTBOX          6214    // 4.50
#define IDM_DLG_NEWHSCROLLBAR       6215    // 4.50
#define IDM_DLG_NEWVSCROLLBAR       6216    // 4.50
#define IDM_DLG_NEWUPDOWN           6217    // 4.50
#define IDM_DLG_NEWPROGRESS         6218    // 4.50
#define IDM_DLG_NEWTRACKBAR         6219    // 4.50
#define IDM_DLG_NEWHOTKEY           6220    // 4.50
#define IDM_DLG_NEWLISTVIEW         6221    // 4.50
#define IDM_DLG_NEWTREEVIEW         6222    // 4.50
#define IDM_DLG_NEWTABCONTROL       6223    // 4.50
#define IDM_DLG_NEWANIMATE          6224    // 4.50
#define IDM_DLG_NEWRICHEDIT         6225    // 4.50
#define IDM_DLG_NEWRICHED20         6226    // 4.50
#define IDM_DLG_NEWDATETIME         6227    // 4.50
#define IDM_DLG_NEWMONTHCAL         6228    // 4.50
#define IDM_DLG_NEWCOMBOBOXEX       6229    // 4.50
#define IDM_DLG_NEWREBAR            6230    // 4.50
#define IDM_DLG_NEWPAGER            6231    // 4.50
#define IDM_DLG_NEWTOOLBAR          6232    // 4.50
#define IDM_DLG_NEWSTATUSBAR        6233    // 4.50
#define IDM_DLG_NEWSYSLINK          6234    // 5.0
#define IDM_DLG_NEWIPADDRESS        6235    // 5.0
#define IDM_DLG_NEWNETADDRESS       6236    // 5.0
#define IDM_DLG_NEWSPLITBUTTON      6237    // 5.0
#define IDM_DLG_NEWCOMMANDLINK      6238    // 5.0
#define IDM_DLG_NEWNATIVEFONT       6239    // 5.0
#define IDM_DLG_ALIGN               6240
#define IDM_DLG_ALIGNLEFT           6241
#define IDM_DLG_ALIGNVERT           6242
#define IDM_DLG_ALIGNRIGHT          6243
#define IDM_DLG_ALIGNTOP            6244
#define IDM_DLG_ALIGNHORZ           6245
#define IDM_DLG_ALIGNBOTTOM         6246
#define IDM_DLG_CENTER              6247
#define IDM_DLG_CENTERVERT          6248
#define IDM_DLG_CENTERHORZ          6249
#define IDM_DLG_SPACE               6250
#define IDM_DLG_SPACEVERT           6251
#define IDM_DLG_SPACEHORZ           6252
#define IDM_DLG_ARRSIZE             6253
#define IDM_DLG_ARRSIZEWIDTH        6254
#define IDM_DLG_ARRSIZEHEIGHT       6255
#define IDM_DLG_ARRSIZEBOTH         6256
#define IDM_DLG_ARRPUSH             6257
#define IDM_DLG_ARRPUSHBOTTOM       6258
#define IDM_DLG_ARRPUSHRIGHT        6259
#define IDM_DLG_SIZETOTEXT          6260
#define IDM_DLG_SORTNAMES           6261
#define IDM_DLG_SORTPROPS           6262
#define IDM_DLG_PROPDESCRIPTION     6263
#define IDM_DLG_RAWSTYLES           6264    // 4.0
#define IDM_DLG_HIDEPROPS           6265
#define IDM_DLG_NEWCUSTOM           6266
#define IDM_DLG_OPENCUSTOM          6267
#define IDM_DLG_REMOVECUSTOM        6268
#define IDM_DLG_LOCKCONTROLS        6269
#define IDM_DLG_ORDERCONTROLS       6270
//
#define IDM_RSRC_NEWBITMAP          6271
#define IDM_RSRC_NEWICON            6272
#define IDM_RSRC_NEWCURSOR          6273
#define IDM_RSRC_NEWANICURSOR       6274
#define IDM_RSRC_NEWVIDEO           6275
#define IDM_RSRC_NEWDIALOG          6276
#define IDM_RSRC_NEWMENU            6277
#define IDM_RSRC_NEWSTRINGTABLE     6278
#define IDM_RSRC_NEWMSGTABLE        6279    // 3.0
#define IDM_RSRC_NEWACCEL           6280
#define IDM_RSRC_NEWVERSION         6281
#define IDM_RSRC_NEWMANIFEST        6282
#define IDM_RSRC_NEWHTML            6283    // 5.0
#define IDM_RSRC_NEWCUSTOM          6284    // 3.0
#define IDM_RSRC_NEWCOPY            6285
#define IDM_RSRC_IMPORT             6286
#define IDM_RSRC_EXPORT             6287    // 6.0
#define IDM_RSRC_SORTNAMES          6288
#define IDM_RSRC_LABELS             6289    // 6.50: IDM_VIEW_LABELS -> IDM_RSRC_LABELS
#define IDM_RSRC_INCLUDES           6290    // 6.50: IDM_VIEW_INCLUDES -> IDM_RSRC_INCLUDES
#define IDM_RSRC_ADDIN              6291    // 3.0 (placeholder, never used)
#define IDM_RSRC_NEW_ADDIN          6292    // 3.0 (placeholder, never used)
//
#define IDM_ANIM_IMPORT             6293
//
#define IDM_MESS_SETINCLUDE         6294    // 3.0
#define IDM_MESS_VIEWLABELS         6295    // 3.0
#define IDM_MESS_ADDIN              6296    // 3.0 (placeholder, never used)
//
#define IDM_SRC_FORCECALLTIP        6297    // 4.50
#define IDM_SRC_COMPLETEWORD        6298
#define IDM_SRC_INSERTSNIPPET       6299    // 5.0
#define IDM_SRC_SURROUNDBYPOPUP     6300    // 5.0
#define IDM_SRC_SURROUNDBY          6301    // 5.0 - room for 16 snippets.
#define IDM_SRC_SURROUNDBY_1        6302    // 5.0 (placeholder, never used)
#define IDM_SRC_SURROUNDBY_2        6303    // 5.0 (placeholder, never used)
#define IDM_SRC_SURROUNDBY_3        6304    // 5.0 (placeholder, never used)
#define IDM_SRC_SURROUNDBY_4        6305    // 5.0 (placeholder, never used)
#define IDM_SRC_SURROUNDBY_5        6306    // 5.0 (placeholder, never used)
#define IDM_SRC_SURROUNDBY_6        6307    // 5.0 (placeholder, never used)
#define IDM_SRC_SURROUNDBY_7        6308    // 5.0 (placeholder, never used)
#define IDM_SRC_SURROUNDBY_8        6309    // 5.0 (placeholder, never used)
#define IDM_SRC_SURROUNDBY_9        6310    // 5.0 (placeholder, never used)
#define IDM_SRC_SURROUNDBY_10       6311    // 5.0 (placeholder, never used)
#define IDM_SRC_SURROUNDBY_11       6312    // 5.0 (placeholder, never used)
#define IDM_SRC_SURROUNDBY_12       6313    // 5.0 (placeholder, never used)
#define IDM_SRC_SURROUNDBY_13       6314    // 5.0 (placeholder, never used)
#define IDM_SRC_SURROUNDBY_14       6315    // 5.0 (placeholder, never used)
#define IDM_SRC_SURROUNDBY_15       6316    // 5.0 (placeholder, never used)
#define IDM_SRC_UCASE               6317
#define IDM_SRC_LCASE               6318
#define IDM_SRC_TABTOSPACE          6319
#define IDM_SRC_SPACETOTAB          6320
#define IDM_SRC_FORMAT              6321    // 3.0
#define IDM_SRC_COMMENT             6322    // 4.0
#define IDM_SRC_UNCOMMENT           6323    // 4.0
#define IDM_SRC_NEXTBOOKMARK        6324
#define IDM_SRC_PREVBOOKMARK        6325
#define IDM_SRC_SETBOOKMARK         6326
#define IDM_SRC_CLEARBOOKMARKS      6327
#define IDM_SRC_WHITESPACE          6328
#define IDM_SRC_LINEBREAKS          6329
#define IDM_SRC_LINENUMBERS         6330
#define IDM_SRC_FOLDINGS            6331
#define IDM_SRC_MATCHINGBRACES      6332    // 4.50
#define IDM_SRC_OPENINCLUDE         6333    // 4.50
#define IDM_SRC_CONTEXTHELP         6334
#define IDM_SRC_VIEWDEFINITION      6335
#define IDM_SRC_PREVDEFINITION      6336
#define IDM_SRC_FINDCALLSITES       6337    // 4.0
#define IDM_SRC_FOLDALL             6338
#define IDM_SRC_UNFOLDALL           6339
#define IDM_SRC_ADDIN               6340    // (placeholder, never used)
#define IDM_SRC_ADDIN_CONV          6341    // (placeholder, never used)
//
#define IDM_DBG_GO                  6342
#define IDM_DBG_RESTART             6343
#define IDM_DBG_STOP                6344
#define IDM_DBG_BREAK               6345
#define IDM_DBG_STEPINTO            6346
#define IDM_DBG_STEPOVER            6347
#define IDM_DBG_STEPOUT             6348    // 4.0
#define IDM_DBG_RUNTOCURSOR         6349    // 4.0
#define IDM_DBG_TOGGLEBREAKPOINT    6350    // 4.0
#define IDM_DBG_EDITBREAKPOINT      6351    // 4.0
#define IDM_DBG_REMOVEBREAKPOINT    6352    // 4.0
#define IDM_DBG_REMOVEBREAKPOINTS   6353    // 4.0
#define IDM_DBG_SHOWNEXTSTMT        6354
#define IDM_DBG_SHOWDISASM          6355
#define IDM_DBG_SHOWSOURCE          6356
#define IDM_DBG_SHOWCODEBYTES       6357
#define IDM_DBG_SHOWSYMBOLS         6358
#define IDM_DBG_ADDWATCH            6359
#define IDM_DBG_REMOVEWATCH         6360
#define IDM_DBG_REMOVEALLWATCHES    6361
#define IDM_DBG_QUICKWATCH          6362    // 4.0
#define IDM_DBG_HWBREAKS            6363    // 4.0
#define IDM_DBG_HEXVALUES           6364    // 4.50
#define IDM_DBG_CPU                 6365    // 5.0
#define IDM_DBG_FPU                 6366    // 5.0
#define IDM_DBG_MMX                 6367    // 5.0
#define IDM_DBG_SSE                 6368    // 5.0
#define IDM_DBG_SSE2                6369    // 5.0
#define IDM_DBG_AVX                 6370    // 7.0 (disabled), 8.0 (supported)
#define IDM_DBG_MODULEMSG           6371    // 8.0
#define IDM_DBG_THREADMSG           6372    // 8.0
#define IDM_DBG_OUTPUTMSG           6373    // 8.0
#define IDM_DBG_TOGGLESUSPENDED     6374    // 6.50
#define IDM_DBG_ADDIN               6375    // (placeholder, never used)
//
#define IDM_WEB_BACK                6376    // 7.0
#define IDM_WEB_FORWARD             6377    // 7.0
#define IDM_WEB_HOME                6378    // 8.0
#define IDM_WEB_REFRESH             6379    // 7.0
#define IDM_WEB_CERTIFICATE         6380    // 7.0
#define IDM_WEB_SHOWSOURCE          6381    // 7.0
#define IDM_WEB_ZOOM_SMALLEST       6382    // 7.0
#define IDM_WEB_ZOOM_SMALLER        6383    // 7.0
#define IDM_WEB_ZOOM_MEDIUM         6384    // 7.0
#define IDM_WEB_ZOOM_LARGER         6385    // 7.0
#define IDM_WEB_ZOOM_LARGEST        6386    // 7.0
#define IDM_WEB_ADDIN               6387    // (placeholder, never used)
//
#define IDM_DIFF_PREVCHANGE         6388    // 7.0
#define IDM_DIFF_NEXTCHANGE         6389    // 7.0
#define IDM_DIFF_REFRESH            6390    // 7.0
#define IDM_DIFF_STOP               6391    // 7.0
#define IDM_DIFF_OPENLEFT           6392    // 7.0
#define IDM_DIFF_OPENRIGHT          6393    // 7.0
#define IDM_DIFF_ADDIN              6394    // (placeholder, never used)
//
// Misc commands.
//
#define IDM_MISC_OPEN               6395
#define IDM_MISC_TEST               6396
#define IDM_MISC_CHECKMNEMONICS     6397
#define IDM_MISC_NEXTWINDOW         6398
#define IDM_MISC_KILLPROCESS        6399
//
// Drag & drop menu.
//
#define IDM_DROP_MOVE               6400
#define IDM_DROP_COPY               6401
#define IDM_DROP_CANCEL             6402
//
// Add-in commands (internal).
//
#define IDM_ADDIN_COMMAND           6403
// Range to: IDM_ADDIN_COMMAND + CMAXADDINS - 1

//
// Dialog ID's --------------------------------------------------------------
//

#define DLG_SPLASH              1001
#define DLG_ABOUT               1002
#define DLG_PROJECTRIBBON       1003
#define DLG_FORMRIBBON          1004
#define DLG_MENURIBBON          1005
#define DLG_PICTRIBBON          1006
#define DLG_ANIMRIBBON          1007
#define DLG_MEMRIBBON           1008
#define DLG_WEBRIBBON           1009    // 7.0
#define DLG_HELPRIBBON          1010    // 8.0
#define DLG_DIFFRIBBON          1011    // 7.0
#define DLG_OPENAS              1012    // 4.50
#define DLG_NEWPROJECT          1013
#define DLG_NEWDEFPROJECT       1014    // 4.0
#define DLG_NEWICONIMAGE        1015
#define DLG_NEWCURSORIMAGE      1016
#define DLG_NEWCUSTOMIMAGE      1017    // 6.0
#define DLG_PROPSFILE           1018
#define DLG_PROPSSOURCE         1019
#define DLG_PROPSPROJ           1020    // 5.0
#define DLG_PROPSCMDS           1021
#define DLG_PROPSPREQS          1022
#define DLG_PROPSBITMAP         1023
#define DLG_PROPSICONCURSOR     1024
#define DLG_PROPSRSRC           1025
#define DLG_PROPSRSRC2          1026    // 5.0
#define DLG_PROPSSTRING         1027
#define DLG_PROPSMESSAGE        1028    // 3.0
#define DLG_PROPSMENU           1029
#define DLG_PROPSMENU2          1030
#define DLG_PROPSACCEL          1031
#define DLG_PROPSACON           1032
#define DLG_PROPSVIDEO          1033
#define DLG_PROPSPROF           1034    // 6.50
#define DLG_SETUPGENERAL        1035
#define DLG_SETUPSOURCE         1036
#define DLG_SETUPTABS           1037    // 3.0
#define DLG_SETUPPROJECT        1038    // 7.0
#define DLG_SETUPDIALOG         1039
#define DLG_SETUPIMAGE          1040
#define DLG_SETUPDEBUG          1041
#define DLG_SETUPWEB            1042    // 7.0
#define DLG_SETUPFOLDERS        1043
#define DLG_SETUPADDINS         1044
#define DLG_SETUPSYSDEFS        1045    // 5.0
#define DLG_SETUPPROJGENERAL    1046    // 7.0: DLG_SETUPPROJECT -> DLG_SETUPPROJGENERAL
#define DLG_SETUPCOMPILER       1047
#define DLG_SETUPASSEMBLER      1048
#define DLG_SETUPLINKER         1049
#define DLG_SETUPRESCOMPILER    1050
#define DLG_SETUPMSGCOMPILER    1051    // 6.0
#define DLG_SETUPLIBRARIAN      1052
#define DLG_SETUPINSTBUILDER    1053    // 5.0
#define DLG_SETUPCABBUILDER     1054    // 5.0
#define DLG_SETUPSIGNER         1055    // 5.0
#define DLG_SETUPPROJFOLDERS    1056    // 3.0
#define DLG_SETUPMACROS         1057
#define DLG_PRINT               1058
#define DLG_FIND                1059
#define DLG_REPLACE             1060
#define DLG_FILEFIND            1061
#define DLG_GOTOLINE            1062
#define DLG_GOTOFUNCTION        1063
#define DLG_RSRCLABELS          1064
#define DLG_RSRCINCLUDES        1065
#define DLG_CUSTOMTOOLS         1066
#define DLG_TOOL                1067
#define DLG_CUSTOMHELP          1068
#define DLG_HELP                1069
#define DLG_CUSTOMKEYS          1070
#define DLG_ADDINS              1071
#define DLG_SNIPPETS            1072    // 5.0
#define DLG_SNIPPET             1073    // 5.0
#define DLG_CUSTOMRESOURCE      1074    // 3.0
#define DLG_IMPORTRESOURCE      1075
#define DLG_DUPRESOURCE         1076
#define DLG_PROJMACRO           1077
#define DLG_NEWCUSTOM           1078
#define DLG_REMOVECUSTOM        1079
#define DLG_SELECTCUSTOM        1080
#define DLG_COLORPAL            1081    // 4.0
#define DLG_COLORHSV            1082    // 4.0
#define DLG_RESIZEIMAGE         1083    // 5.0
#define DLG_ROTATEIMAGE         1084
#define DLG_OILPAINTIMAGE       1085
#define DLG_SPREADIMAGE         1086
#define DLG_FISHEYEIMAGE        1087
#define DLG_DROPSHADOWIMAGE     1088    // 4.0
#define DLG_HSVIMAGE            1089
#define DLG_DRAWTEXT            1090
#define DLG_FORMTEXT            1091    // 5.0
#define DLG_MENUTEST            1092
#define DLG_TYPEDKEY            1093
#define DLG_ADDPROJFILE         1094    // 4.0
#define DLG_SELECTPROJECT       1095    // 4.0
#define DLG_PROJECTDEPS         1096    // 4.0
#define DLG_SAVEZIP             1097
#define DLG_EXTRACTZIP          1098
#define DLG_BROWSEINFO          1099
#define DLG_SELECTSNIPPET       1100    // 5.0
#define DLG_EDITBREAK           1101    // 4.0
#define DLG_ADDWATCH            1102
#define DLG_QUICKWATCH          1103    // 4.0
#define DLG_HWBREAKS            1104    // 4.0
#define DLG_EFLAGS              1105
#define DLG_CONTROLWORD         1106
#define DLG_STATUSWORD          1107
#define DLG_TAGWORD             1108
#define DLG_MXCSR               1109
#define DLG_PSR                 1110    // 4.50
#define DLG_RUNEXE              1111    // 5.0; 6.50: DLG_DEBUGEXE -> DLG_RUNEXE
// Number 1119 is reserved for stc32!
// Range ctlFirst (1024) to ctlLast (1279).

//
// Dialog control ID's ------------------------------------------------------
//

#define DID_ABOUT1              4001
#define DID_ABOUT2              4002
#define DID_ABOUT3              4003
#define DID_ABOUT4              4004
#define DID_ABOUT5              4005
#define DID_IMAGELIST           4006    // DLG_PICTRIBBON
#define DID_HOTSPOT             4007
#define DID_HOTSPOTLABEL        4008
#define DID_ACONFRAME           4009
#define DID_ACONRATE            4010
#define DID_ACONRATESPIN        4011
#define DID_ACONTITLE           4012
#define DID_ACONARTIST          4013
#define DID_ACONFRAMES          4014
#define DID_ACONSTEPS           4015
#define DID_ACONRATEDEF         4016
#define DID_OPENASLIST          4017    // 4.50
#define DID_NEWPROJLIST         4018
#define DID_NEWPROJVIEW         4019
#define DID_PROJNAME            4020
#define DID_PROJPATH            4021
#define DID_ADVANCED            4022    // 6.0
#define DID_OUTPUTPATH          4023    // 6.0
#define DID_OUTPUTPATHLABEL     4024    // 6.0
#define DID_RESULTPATH          4025    // 6.0
#define DID_RESULTPATHLABEL     4026    // 6.0
#define DID_NEWWORKSPACE        4027    // 4.0
#define DID_ADDTOWORKSPACE      4028    // 4.0
#define DID_NEWIMAGELIST        4029    // Both Icon and Cursor. Must be!
#define DID_CUSTOMCLASS         4030
#define DID_CUSTOMSTYLE         4031
#define DID_CUSTOMEXSTYLE       4032
#define DID_CUSTOMWIDTH         4033
#define DID_CUSTOMHEIGHT        4034
#define DID_CUSTOMTEXT          4035
#define DID_FILENAME            4036
#define DID_FILEPATH            4037
#define DID_FILESIZE            4038
#define DID_REALFILESIZE        4039    // 8.0
#define DID_FILEICON            4040
#define DID_FILEMESSAGE         4041    // 5.0
#define DID_TIME_CREATED        4042
#define DID_TIME_CHANGED        4043
#define DID_TIME_TOUCHED        4044
#define DID_ATTR_ARCHIVE        4045
#define DID_ATTR_READONLY       4046
#define DID_ATTR_HIDDEN         4047
#define DID_ATTR_SYSTEM         4048
#define DID_LANGUAGE            4049
#define DID_CRBREAK             4050
#define DID_LFBREAK             4051
#define DID_ENCODING            4052    // 5.0
#define DID_ENCODING2           4053    // 5.0
#define DID_ENCODING3           4054    // 5.0
#define DID_CTRLCHARS           4055
#define DID_SHELLCOMMANDS       4056
#define DID_MACROLIST           4057
#define DID_MACRONAME           4058
#define DID_MACROVALUE          4059
#define DID_PREQSLIST           4060
#define DID_IMAGEWIDTH          4061
#define DID_IMAGEHEIGHT         4062
#define DID_IMAGECOLORS         4063
#define DID_COMPRESSEDFILE      4064
#define DID_TRANSPARENCY        4065    // 5.0
#define DID_XORMASK             4066
#define DID_ANDMASK             4067
#define DID_RSRCID              4068
#define DID_RSRCLANGUAGE        4069
#define DID_RSRCFILENAME        4070    // 4.0
#define DID_RSRCTYPE            4071    // 3.0
#define DID_STRINGID            4072
#define DID_STRINGTEXT          4073
#define DID_MSGID               4074    // 3.0
#define DID_MSGCODE             4075    // 3.0
#define DID_MSGFACILITY         4076    // 3.0
#define DID_MSGSEVERITY         4077    // 3.0
#define DID_MSGCUSTOMER         4078    // 3.0
#define DID_MSGTEXT             4079    // 3.0
#define DID_MSGANSI             4080    // 3.0
#define DID_MSGUNICODE          4081    // 3.0
#define DID_MENUID              4082
#define DID_MENUTEXT            4083
#define DID_MENUPOPUP           4084
#define DID_MENUSEPARATOR       4085
#define DID_MENUDEFAULT         4086
#define DID_MENUGRAYED          4087
#define DID_MENUCHECKED         4088
#define DID_MENURADIOCHECK      4089
#define DID_MENUBREAK           4090
#define DID_MENUTEXTID          4091    // Menubar
#define DID_MENUCHECKBUTTON     4092    // Menubar
#define DID_MENUGROUP           4093    // Menubar
#define DID_MENUAUTOSIZE        4094    // Menubar
#define DID_MENUNOWRAP          4095    // Menubar
#define DID_MENUPRESSED         4096    // Menubar
#define DID_MENUDISABLED        4097    // Menubar
#define DID_MENUELLIPSIS        4098    // Menubar
#define DID_MENUINDETERMINATE   4099    // Menubar
#define DID_MENUHIDDEN          4100    // Menubar
#define DID_MENUHIGHLIGHTED     4101    // Menubar
#define DID_ACCELID             4102
#define DID_ACCELKEY            4103
#define DID_ACCELCTRL           4104
#define DID_ACCELALT            4105
#define DID_ACCELSHIFT          4106
#define DID_ACCELASCII          4107
#define DID_ACCELVIRTKEY        4108
#define DID_VIDEORATE           4109
#define DID_VIDEORATESPIN       4110
#define DID_FRAMERATE           4111
#define DID_FRAMERATESPIN       4112
#define DID_TRANSPARENT         4113
#define DID_CODEC               4114
#define DID_FUNCSAMPLES         4115    // 6.50
#define DID_PROFSAMPLES         4116    // 6.50
#define DID_VOIDSAMPLES         4117    // 6.50
#define DID_SHOWSPLASH          4118
#define DID_ONSTARTUP           4119    // 7.0
#define DID_SHOWPATH            4120
#define DID_FASTFILECLASS       4121
#define DID_AUTORELOAD          4122    // 6.0
#define DID_UNIQUERSRCIDENTS    4123    // 4.0
#define DID_MOUSELINES          4124
#define DID_MOUSELINESSPIN      4125
#define DID_COLORLIST           4126
#define DID_FORECOLOR           4127
#define DID_BACKCOLOR           4128
#define DID_FONTFACE            4129
#define DID_FONTSIZE            4130
#define DID_BROWSEINFO          4131
#define DID_BROWSELEVEL1        4132
#define DID_BROWSELEVEL2        4133
#define DID_CALLTIPS            4134
#define DID_MEMBERLIST          4135
#define DID_INCLUDELIST         4136    // 6.50
#define DID_DRAGDROP            4137
#define DID_WRAPFINDQUERY       4138
#define DID_MAKEBACKUP          4139
#define DID_TABSIZE             4140
#define DID_INDENTSIZE          4141    // 4.50
#define DID_USETABS             4142    // 3.0
#define DID_SPACETABS           4143    // 3.0
#define DID_INDENTNONE          4144    // 3.0
#define DID_INDENTBLOCK         4145    // 3.0
#define DID_INDENTSMART         4146    // 3.0
#define DID_CSTYLE1             4147    // 3.0
#define DID_CSTYLE2             4148    // 3.0
#define DID_AUTOFILESAVE        4149
#define DID_FASTLOADPROJECT     4150    // 3.0
#define DID_PROJPANELEFT        4151    // 7.0
#define DID_PROJPANERIGHT       4152    // 7.0
#define DID_SORTPROJFUNCS       4153    // 7.0
#define DID_AUTOSELECTNEWPROJ   4154    // 7.0
#define DID_ZIPEXTRA            4155    // 7.0
#define DID_UNIQUEZIPNAMES      4156    // 4.0
#define DID_CXFORMGRID          4157
#define DID_CYFORMGRID          4158
#define DID_CXFORMMARGIN        4159
#define DID_CYFORMMARGIN        4160
#define DID_CXCONTROLSPACE      4161
#define DID_CYCONTROLSPACE      4162
#define DID_CXBUTTONSPACE       4163
#define DID_CYBUTTONSPACE       4164
#define DID_FORMGRID            4165
#define DID_PIXELGRID           4166
#define DID_IMAGEGRID           4167
#define DID_CXIMAGEGRID         4168
#define DID_CYIMAGEGRID         4169
#define DID_JPEGQUALITY         4170
#define DID_PNGCOMPRESSION      4171    // 4.0
#define DID_USEDITHER           4172
#define DID_JITDEBUGGER         4173
#define DID_HEXVALUES           4174
#define DID_CHECKSOURCETIME     4175
#define DID_FLAGSDIALOG         4176
#define DID_BREAKONENTRY        4177    // 4.0
#define DID_MAXARRAYELEMS       4178    // 3.0
#define DID_PROFRATE            4179    // 6.50
#define DID_PROFRATESPIN        4180    // 6.50
#define DID_ALLMODULES          4181    // 6.50
#define DID_PROFLINES           4182    // 8.0
#define DID_CALLTREE            4183    // 8.0
#define DID_HOMEPAGE            4184    // 7.0
#define DID_FOLDERGROUP         4185
#define DID_FOLDERS             4186
#define DID_ARGUMENTS           4187    // PROJ
#define DID_WORKPATH            4188    // PROJ
#define DID_EXECUTOR            4189    // PROJ
#define DID_DEBUGINFO           4190    // CC, AS, LINK
#define DID_CRTLIB              4191    // CC
#define DID_OPTIMIZATION        4192    // CC
#define DID_WARNINGLEVEL        4193    // CC
#define DID_CALLCONV            4194    // CC, AS
#define DID_MACHINE             4195    // CC, AS, LINK
#define DID_FPMODEL             4196    // CC (6.0)
#define DID_INLINEMODEL         4197    // CC (6.0)
#define DID_CSTANDARD           4198    // CC (7.0)
#define DID_MSEXTENSIONS        4199    // CC
#define DID_EXTENSIONS          4200    // CC
#define DID_OPENMP              4201    // CC (8.0)
#define DID_OLDNAMES            4202    // CC
#define DID_NOMANGLENAMES       4203    // CC
#define DID_OMITDEFAULTLIB      4204    // CC
#define DID_HOOKCALL            4205    // CC
#define DID_UNSIGNEDCHAR        4206    // CC
#define DID_OVERFLOWTRAP        4207    // CC (7.0)
#define DID_PPDEFINE            4208    // CC, RC, AS
#define DID_PPUNDEFINE          4209    // CC, RC
#define DID_NULLTERMINATE       4210    // RC (5.0)
#define DID_MAPFILE             4211    // LINK
#define DID_NODEFAULTLIB        4212    // LINK
#define DID_RELEASE             4213    // LINK
#define DID_LARGEADDRESSAWARE   4214    // LINK (5.0)
#define DID_LIBRARIES           4215    // LINK
#define DID_DELAYLOADS          4216    // LINK
#define DID_ENTRYPOINT          4217    // LINK
#define DID_BASEADDRESS         4218    // LINK
#define DID_ALIGNMENT           4219    // LINK
#define DID_STACKRESERVE        4220    // LINK
#define DID_STACKCOMMIT         4221    // LINK
#define DID_VERMAJOR            4222    // LINK
#define DID_VERMINOR            4223    // LINK
#define DID_OSVERMAJOR          4224    // LINK
#define DID_OSVERMINOR          4225    // LINK
#define DID_SUBSYSTEM           4226    // LINK
#define DID_SUBSYSMAJOR         4227    // LINK
#define DID_SUBSYSMINOR         4228    // LINK
#define DID_VERBOSE             4229    // PROJ, RC, MC, LINK, LIB, INST, CAB, SIGN
#define DID_SIGN                4230    // SIGN (5.0)
#define DID_CERTIFICATE         4231    // SIGN (5.0)
#define DID_TIMESTAMPSERVER     4232    // SIGN (5.0)
#define DID_CABORIGINAL         4233    // CB (5.0)
#define DID_CABPOCKETPC         4234    // CB (5.0)
#define DID_CABSMARTPHONE       4235    // CB (5.0)
#define DID_PROGRESS            4236
#define DID_FINDWHAT            4237
#define DID_REPLACEWITH         4238
#define DID_SEARCHUP            4239
#define DID_SEARCHDOWN          4240
#define DID_MATCHCASE           4241
#define DID_WHOLEWORD           4242    // 6.0
#define DID_FINDSPEC            4243    // 7.0: DID_FINDFORMAT -> DID_FINDSPEC
#define DID_FINDPATH            4244
#define DID_SUBFOLDERS          4245
#define DID_LINENO              4246
#define DID_ADDRESS             4247
#define DID_FUNCNAME            4248
#define DID_LABELLIST           4249
#define DID_LABELNAME           4250
#define DID_LABELVALUE          4251
#define DID_INCLUDES            4252
#define DID_TOOLS               4253
#define DID_TOOLTEXT            4254
#define DID_TOOLCOMMAND         4255
#define DID_TOOLARGUMENTS       4256
#define DID_TOOLFOLDER          4257
#define DID_TOOLCAPTURE         4258
#define DID_HELPFILES           4259
#define DID_HELPTEXT            4260
#define DID_HELPCOMMAND         4261
#define DID_HELPBUILTIN         4262    // 7.0
#define DID_KEYCATEGORIES       4263
#define DID_KEYCOMMANDS         4264
#define DID_KEYLIST             4265
#define DID_ADDINS              4266
#define DID_SNIPPETGROUP        4267    // 5.0
#define DID_SNIPPETS            4268    // 5.0
#define DID_SNIPPETNAME         4269    // 5.0
#define DID_SNIPPETCODE         4270    // 5.0
#define DID_IMPORTASLIST        4271    // 4.50 (from 3.0 radio buttons)
#define DID_CUSTOMLIST          4272
#define DID_CUSTOMSAMPLE        4273
#define DID_RETAINRATIO         4274    // 5.0
#define DID_DEGREES             4275
#define DID_RADIUS              4276
#define DID_AMOUNT              4277
#define DID_CURVATURE           4278
#define DID_OFFSETX             4279    // 4.0
#define DID_OFFSETXSPIN         4280    // 4.0
#define DID_OFFSETY             4281    // 4.0
#define DID_OFFSETYSPIN         4282    // 4.0
#define DID_HUE                 4283
#define DID_HUESPIN             4284    // 5.0
#define DID_SATURATION          4285
#define DID_SATURATIONSPIN      4286    // 5.0
#define DID_BRIGHTNESS          4287
#define DID_BRIGHTNESSSPIN      4288    // 5.0
#define DID_PREVIEW             4289
#define DID_TOOLBAR             4290
#define DID_GENERIC             4291
#define DID_GENERIC2            4292    // 6.0
#define DID_HIDDEN              4293
#define DID_PROJECTLIST         4294    // 4.0
#define DID_DEPENDENCYLIST      4295    // 4.0
#define DID_ZIPCOMMENT          4296
#define DID_ZIPFILES            4297
#define DID_BROWSETAGS          4298
#define DID_BREAKONHITCOUNT     4299    // 4.0
#define DID_BREAKCOUNT          4300    // 4.0
#define DID_BREAKONEXPRESSION   4301    // 4.0
#define DID_BREAKEXPRESSION     4302    // 4.0
#define DID_BREAKENABLED        4303    // 4.0
#define DID_WATCHBYLIST         4304    // 4.0
#define DID_WATCHLIST           4305
#define DID_WATCHBYEXPRESSION   4306    // 4.0
#define DID_WATCHEXPRESSION     4307    // 4.0
#define DID_WATCHRESULT         4308    // 4.0
#define DID_HWBREAKTYPE1        4309    // 4.0
#define DID_HWBREAKTYPE2        4310    // 4.0
#define DID_HWBREAKTYPE3        4311    // 4.0
#define DID_HWBREAKTYPE4        4312    // 4.0
#define DID_HWBREAKADDRESS1     4313    // 4.0
#define DID_HWBREAKADDRESS2     4314    // 4.0
#define DID_HWBREAKADDRESS3     4315    // 4.0
#define DID_HWBREAKADDRESS4     4316    // 4.0
#define DID_HWBREAKSIZE1        4317    // 4.0
#define DID_HWBREAKSIZE2        4318    // 4.0
#define DID_HWBREAKSIZE3        4319    // 4.0
#define DID_HWBREAKSIZE4        4320    // 4.0
#define DID_CF                  4321
#define DID_PF                  4322
#define DID_AF                  4323
#define DID_ZF                  4324
#define DID_SF                  4325
#define DID_DF                  4326
#define DID_OF                  4327
#define DID_IM                  4328
#define DID_DM                  4329
#define DID_ZM                  4330
#define DID_OM                  4331
#define DID_UM                  4332
#define DID_PM                  4333
#define DID_PC0                 4334
#define DID_PC1                 4335
#define DID_PC2                 4336
#define DID_PC3                 4337
#define DID_RC0                 4338
#define DID_RC1                 4339
#define DID_RC2                 4340
#define DID_RC3                 4341
#define DID_IE                  4342
#define DID_DE                  4343
#define DID_ZE                  4344
#define DID_OE                  4345
#define DID_UE                  4346
#define DID_PE                  4347
#define DID_STKFAULT            4348
#define DID_ES                  4349
#define DID_TOP                 4350
#define DID_TAG0                4351
#define DID_TAG1                4352
#define DID_TAG2                4353
#define DID_TAG3                4354
#define DID_TAG4                4355
#define DID_TAG5                4356
#define DID_TAG6                4357
#define DID_TAG7                4358
#define DID_DAZ                 4359
#define DID_FZ                  4360
#define DID_PALETTE             4361    // 4.0
#define DID_HSV                 4362    // 4.0
#define DID_RED                 4363    // 4.0
#define DID_REDSPIN             4364    // 5.0
#define DID_GREEN               4365    // 4.0
#define DID_GREENSPIN           4366    // 5.0
#define DID_BLUE                4367    // 4.0
#define DID_BLUESPIN            4368    // 5.0
#define DID_ALPHA               4369    // 4.0
#define DID_ALPHASPIN           4370    // 5.0
#define DID_ALPHALABEL          4371    // 4.0
#define DID_ALPHATRACK          4372    // 4.0
#define DID_ALPHAFRAME          4373    // 4.0
#define DID_PALINDEX            4374    // 6.50
#define DID_URL                 4375    // 7.0
#define DID_LEFT                4376    // 7.0
#define DID_RIGHT               4377    // 7.0
#define DID_DEEP                4378    // 7.0

#ifndef stc32
#define stc32                   0x45F   // = 1119
#endif

// Private Button ID's.
#define IDOK                    1       // For help project.
#define IDCANCEL                2       // For help project.
#define IDADD                   21
#define IDCHANGE                22
#define IDDEL                   23
#define IDDEFAULT               24
#define IDREPLACE               25
#define IDREPLACEALL            26
#define IDBROWSE                27
#define IDTYPEDKEY              28
#define IDSETUP                 29
#define IDSYSDEFS               30      // 5.0
#define IDBROWSE2               31      // 7.0

//
// Various resource ID's ----------------------------------------------------
//

// Menu ID's.
//
#define IDR_MNU_MAIN            2001
#define IDR_MNU_EDIT            2002
#define IDR_MNU_PICT            2003
#define IDR_MNU_FORM            2004
#define IDR_MNU_MENU            2005
#define IDR_MNU_MESS            2006    // 3.0
#define IDR_MNU_RSRC            2007
#define IDR_MNU_DBG             2008
#define IDR_MNU_WEB             2009    // 7.0
#define IDR_MNU_DIFF            2010    // 7.0

#define IDR_CTX_EDIT            2011
#define IDR_CTX_PICT            2012
#define IDR_CTX_FORM            2013
#define IDR_CTX_TEXT            2014
#define IDR_CTX_MESS            2015    // 3.0
#define IDR_CTX_MENU            2016
#define IDR_CTX_ACCL            2017
#define IDR_CTX_VERS            2018
#define IDR_CTX_ANIM            2019
#define IDR_CTX_RSRC            2020
#define IDR_CTX_DUMP            2021
#define IDR_CTX_PROF            2022    // 6.50
#define IDR_CTX_PROJPANE        2023    // 4.0
#define IDR_CTX_PROJSRCWKS      2024    // 4.0
#define IDR_CTX_PROJSRCPROJ     2025    // 4.0
#define IDR_CTX_PROJSRCFILE     2026    // 4.0
#define IDR_CTX_PROJSRCFUNC     2027    // 8.0
#define IDR_CTX_PROJTARGWKS     2028    // 5.0
#define IDR_CTX_PROJTARGPROJ    2029    // 4.0
#define IDR_CTX_PROJTARGFILE    2030    // 4.0
#define IDR_CTX_BUILD           2031
#define IDR_CTX_PROPS           2032
#define IDR_CTX_OUTPUT          2033
#define IDR_CTX_TRACE           2034
#define IDR_CTX_DBGSRC          2035
#define IDR_CTX_DBGMIX          2036
#define IDR_CTX_BREAK           2037    // 4.0
#define IDR_CTX_WATCH           2038
#define IDR_CTX_SYMBOL          2039    // 4.50
#define IDR_CTX_MEMORY          2040    // 4.50
#define IDR_CTX_THREAD          2041    // 6.50
#define IDR_CTX_REGS            2042    // 5.0
#define IDR_CTX_DROP            2043
#define IDR_CTX_TABS            2044
#define IDR_CTX_WEB             2045    // 7.0
#define IDR_CTX_DIFFOUTLINE     2046    // 7.0
#define IDR_CTX_DIFFEXPAND      2047    // 7.0

#define IDR_ACC_MAIN            3001

// Bitmap ID's.
//
#define IDR_BMP_BANNER          8001    // About banner.
#define IDR_BMP_BRUSHTYPES      8002
#define IDR_BMP_SELTYPES        8003
#define IDR_BMP_ERASETYPES      8004
#define IDR_BMP_LINETYPES       8005    // 4.0
#define IDR_BMP_SHAPETYPES      8006
#define IDR_BMP_SPRAYTYPES      8007
#define IDR_BMP_ZOOMTYPES       8008
#define IDR_BMP_GRADTYPES       8009    // 5.0
#define IDR_BMP_HANDLE1         8010
#define IDR_BMP_HANDLE2         8011
#define IDR_BMP_MACROLIST       8012
#define IDR_BMP_SYMTREE         8013
#define IDR_BMP_HELPTREE        8014    // 7.0
// Boring style.
#define IDR_BMP_MDITABS         8015    // 8.0
#define IDR_BMP_HOT_MDITABS     8016    // 8.0
#define IDR_BMP_RSRCTREE        8017
#define IDR_BMP_PROJTREE        8018
#define IDR_BMP_PROJBROW        8019
#define IDR_BMP_DEBUGREGS       8020
#define IDR_BMP_EDITCUES        8021
#define IDR_BMP_BREAKCUES       8022    // 4.0
#define IDR_BMP_FORMCUES        8023    // 5.0
#define IDR_BMP_FONTCUES        8024    // 6.50
#define IDR_BMP_THRDCUES        8025    // 6.50
// XP style.
#define IDR_BMP_MDITABS_XP      8026    // 8.0
#define IDR_BMP_HOT_MDITABS_XP  8027    // 8.0
#define IDR_BMP_RSRCTREE_XP     8028
#define IDR_BMP_PROJTREE_XP     8029
#define IDR_BMP_PROJBROW_XP     8030
#define IDR_BMP_DEBUGREGS_XP    8031    // 5.0
#define IDR_BMP_EDITCUES_XP     8032
#define IDR_BMP_BREAKCUES_XP    8033    // 4.0
#define IDR_BMP_FORMCUES_XP     8034    // 5.0
#define IDR_BMP_FONTCUES_XP     8035    // 6.50
#define IDR_BMP_THRDCUES_XP     8036    // 6.50
// Alpha channel patterns.
#define IDR_BMP_ALPHAZOOM2      8037    // 4.0
#define IDR_BMP_ALPHAZOOM6      8038    // 4.0
#define IDR_BMP_ALPHAZOOM8      8039    // 4.0

// Icon ID's.
//
#define IDR_ICO_MAIN            8040    // Application icon.
#define IDR_ICO_SRCFILE         8041    // Explorer association icon (.c, .asm).
#define IDR_ICO_WRKFILE         8042    // Explorer association icon (.h, .inc, .rc, ...).
#define IDR_ICO_SOURCE          8043
#define IDR_ICO_IMAGE           8044
#define IDR_ICO_DIALOG          8045
#define IDR_ICO_DEBUG           8046
#define IDR_ICO_PROFILE         8047    // 6.50
#define IDR_ICO_STRTABLE        8048
#define IDR_ICO_MSGTABLE        8049    // 3.0
#define IDR_ICO_MENU            8050
#define IDR_ICO_ACCEL           8051
#define IDR_ICO_VERSION         8052
#define IDR_ICO_ANIM            8053
#define IDR_ICO_RESOURCE        8054
#define IDR_ICO_HEXDUMP         8055
#define IDR_ICO_DIFF            8056    // 7.0
#define IDR_ICO_W32APP          8057
#define IDR_ICO_W32DLL          8058
#define IDR_ICO_W32LIB          8059
#define IDR_ICO_W32CON          8060
#define IDR_ICO_W32INST         8061    // 5.0
#define IDR_ICO_W64APP          8062    // 5.0
#define IDR_ICO_W64DLL          8063    // 5.0
#define IDR_ICO_W64LIB          8064    // 5.0
#define IDR_ICO_W64CON          8065    // 5.0
#define IDR_ICO_PPCAPP          8066
#define IDR_ICO_PPCDLL          8067
#define IDR_ICO_PPCLIB          8068
#define IDR_ICO_PPCINST         8069    // 5.0
#define IDR_ICO_SPAPP           8070
#define IDR_ICO_SPDLL           8071
#define IDR_ICO_SPLIB           8072
#define IDR_ICO_SPINST          8073    // 5.0
#define IDR_ICO_WIZARD          8074
#define IDR_ICO_CHECK           8075
// Objects and actions.
#define IDR_ICO_OPEN            8076    // 6.50
#define IDR_ICO_SAVE            8077    // 6.50
#define IDR_ICO_SAVEALL         8078    // 6.50
#define IDR_ICO_PRINT           8079    // 6.50
#define IDR_ICO_PROPERTIES      8080    // 6.50

#define IDR_ICO_UNDO            8081    // 6.50
#define IDR_ICO_REDO            8082    // 6.50
#define IDR_ICO_CUT             8083    // 6.50
#define IDR_ICO_COPY            8084    // 6.50
#define IDR_ICO_PASTE           8085    // 6.50
#define IDR_ICO_DELETE          8086    // 6.50
#define IDR_ICO_INSERT          8087    // 6.50
#define IDR_ICO_EDIT            8088    // 6.50
#define IDR_ICO_FIND            8089    // 6.50
#define IDR_ICO_FINDNEXT        8090    // 6.50
#define IDR_ICO_FILEFIND        8091    // 6.50

#define IDR_ICO_TABPAGES        8092    // 6.50
#define IDR_ICO_CASCADE         8093    // 6.50
#define IDR_ICO_TILEHORZ        8094    // 6.50
#define IDR_ICO_TILEVERT        8095    // 6.50
#define IDR_ICO_TOOL            8096    // 6.50
#define IDR_ICO_HELP            8097    // 6.50
#define IDR_ICO_WEB             8098    // 6.50
#define IDR_ICO_USER            8099    // 6.50

#define IDR_ICO_BITMAP          8100    // 6.50
#define IDR_ICO_ICON            8101    // 6.50
#define IDR_ICO_CURSOR          8102    // 6.50
#define IDR_ICO_ANICURSOR       8103    // 6.50
#define IDR_ICO_VIDEO           8104    // 6.50

#define IDR_ICO_FOLDER          8105    // 6.50
#define IDR_ICO_MOVEUP          8106    // 6.50
#define IDR_ICO_MOVEDOWN        8107    // 6.50
#define IDR_ICO_RENAME          8108    // 6.50

#define IDR_ICO_BACK            8109    // 7.0
#define IDR_ICO_FORWARD         8110    // 7.0
#define IDR_ICO_HOME            8111    // 8.0
#define IDR_ICO_REFRESH         8112    // 7.0
#define IDR_ICO_CERTIFICATE     8113    // 7.0

// Debugger.
#define IDR_ICO_GODEBUG         8114    // 6.50
#define IDR_ICO_RESTART         8115    // 6.50
#define IDR_ICO_BREAK           8116    // 6.50
#define IDR_ICO_STOPDEBUG       8117    // 6.50, 7.00: IDR_ICO_STOP -> IDR_ICO_STOPDEBUG
#define IDR_ICO_STEPINTO        8118    // 6.50
#define IDR_ICO_STEPOVER        8119    // 6.50
#define IDR_ICO_STEPOUT         8120    // 6.50
#define IDR_ICO_QUICKWATCH      8121    // 6.50
#define IDR_ICO_TOGGLEBRKPT     8122    // 6.50
#define IDR_ICO_SHOWNEXTSTMT    8123    // 6.50
// Projects.
#define IDR_ICO_SOURCEFILES     8124    // 6.50
#define IDR_ICO_TARGETFILES     8125    // 6.50
#define IDR_ICO_BUILD           8126    // 6.50
#define IDR_ICO_STOPBUILD       8127    // 6.50
#define IDR_ICO_COMPILE         8128    // 6.50
#define IDR_ICO_EXECUTE         8129    // 6.50
#define IDR_ICO_ADDFILE         8130    // 6.50
#define IDR_ICO_ADDPROJ         8131    // 6.50
#define IDR_ICO_ZIP             8132    // 6.50
#define IDR_ICO_UNZIP           8133    // 6.50
#define IDR_ICO_MAKEPREQ        8134    // 6.50
#define IDR_ICO_SETACTIVE       8135    // 6.50
#define IDR_ICO_SETTINGS        8136    // 6.50
#define IDR_ICO_EXCLUDE         8137    // 6.50
#define IDR_ICO_CLOSEPROJ       8138    // 6.50
#define IDR_ICO_VIEWLIST        8139    // 6.50
#define IDR_ICO_VIEWICON        8140    // 6.50
#define IDR_ICO_ADVANCED        8141    // 6.50
#define IDR_ICO_STANDARD        8142    // 6.50
// Image editor.
#define IDR_ICO_PENCIL          8143    // 6.50
#define IDR_ICO_BRUSH           8144    // 6.50
#define IDR_ICO_SELECT          8145    // 6.50
#define IDR_ICO_ERASER          8146    // 6.50
#define IDR_ICO_LINE            8147    // 6.50
#define IDR_ICO_RECT            8148    // 6.50
#define IDR_ICO_ELLIPSE         8149    // 6.50
#define IDR_ICO_ROUNDRECT       8150    // 6.50
#define IDR_ICO_FILL            8151    // 6.50
#define IDR_ICO_DRAWTEXT        8152    // 6.50
#define IDR_ICO_SPRAY           8153    // 6.50
#define IDR_ICO_PICKCOLOR       8154    // 6.50
#define IDR_ICO_MAGNIFY         8155    // 6.50
#define IDR_ICO_HOTSPOT         8156    // 6.50
#define IDR_ICO_GRADIENT        8157    // 6.50
#define IDR_ICO_PALETTE         8158    // 6.50
#define IDR_ICO_OPENPALETTE     8159    // 6.50
#define IDR_ICO_SAVEPALETTE     8160    // 6.50
#define IDR_ICO_ROTATE          8161    // 6.50
#define IDR_ICO_MIRRORVERT      8162    // 6.50
#define IDR_ICO_MIRRORHORZ      8163    // 6.50
#define IDR_ICO_RESIZE          8164    // 6.50
#define IDR_ICO_NEWIMAGE        8165    // 6.50
// Dialog editor.
#define IDR_ICO_TESTDIALOG      8166    // 6.50
#define IDR_ICO_CHECKMNEMONICS  8167    // 6.50
#define IDR_ICO_LOCKCONTROLS    8168    // 6.50
#define IDR_ICO_ORDERCONTROLS   8169    // 6.50
#define IDR_ICO_ALIGNLEFT       8170    // 6.50
#define IDR_ICO_ALIGNRIGHT      8171    // 6.50
#define IDR_ICO_ALIGNTOP        8172    // 6.50
#define IDR_ICO_ALIGNBOTTOM     8173    // 6.50
#define IDR_ICO_ALIGNHORZ       8174    // 6.50
#define IDR_ICO_ALIGNVERT       8175    // 6.50
#define IDR_ICO_SPACEHORZ       8176    // 6.50
#define IDR_ICO_SPACEVERT       8177    // 6.50
#define IDR_ICO_ARRSIZEWIDTH    8178    // 6.50
#define IDR_ICO_ARRSIZEHEIGHT   8179    // 6.50
#define IDR_ICO_ARRSIZEBOTH     8180    // 6.50
#define IDR_ICO_ARRPUSHBOTTOM   8181    // 6.50
#define IDR_ICO_ARRPUSHRIGHT    8182    // 6.50
#define IDR_ICO_CENTERHORZ      8183    // 6.50
#define IDR_ICO_CENTERVERT      8184    // 6.50
// Dialog controls.
#define IDR_ICO_POINTER         8185    // 6.50
#define IDR_ICO_PICTURE         8186    // 6.50
#define IDR_ICO_STATIC          8187    // 6.50
#define IDR_ICO_EDITBOX         8188    // 6.50
#define IDR_ICO_GROUPBOX        8189    // 6.50
#define IDR_ICO_PUSHBUTTON      8190    // 6.50
#define IDR_ICO_CHECKBOX        8191    // 6.50
#define IDR_ICO_RADIOBUTTON     8192    // 6.50
#define IDR_ICO_COMBOBOX        8193    // 6.50
#define IDR_ICO_LISTBOX         8194    // 6.50
#define IDR_ICO_HSCROLLBAR      8195    // 6.50
#define IDR_ICO_VSCROLLBAR      8196    // 6.50
#define IDR_ICO_UPDOWN          8197    // 6.50
#define IDR_ICO_PROGRESS        8198    // 6.50
#define IDR_ICO_TRACKBAR        8199    // 6.50
#define IDR_ICO_HOTKEY          8200    // 6.50
#define IDR_ICO_LISTVIEW        8201    // 6.50
#define IDR_ICO_TREEVIEW        8202    // 6.50
#define IDR_ICO_TABCONTROL      8203    // 6.50
#define IDR_ICO_ANIMATE         8204    // 6.50
#define IDR_ICO_RICHEDIT        8205    // 6.50
#define IDR_ICO_RICHED20        8206    // 6.50
#define IDR_ICO_DATETIME        8207    // 6.50
#define IDR_ICO_MONTHCAL        8208    // 6.50
#define IDR_ICO_COMBOBOXEX      8209    // 6.50
#define IDR_ICO_REBAR           8210    // 6.50
#define IDR_ICO_PAGER           8211    // 6.50
#define IDR_ICO_TOOLBAR         8212    // 6.50
#define IDR_ICO_STATUSBAR       8213    // 6.50
#define IDR_ICO_SYSLINK         8214    // 6.50
#define IDR_ICO_IPADDRESS       8215    // 6.50
#define IDR_ICO_NETADDRESS      8216    // 6.50
#define IDR_ICO_SPLITBUTTON     8217    // 6.50
#define IDR_ICO_COMMANDLINK     8218    // 6.50
#define IDR_ICO_NATIVEFONT      8219    // 6.50
// Menu editor.
#define IDR_ICO_TESTMENU        8220    // 6.50
// Source editor.
#define IDR_ICO_SETBOOKMARK     8221    // 6.50
#define IDR_ICO_NEXTBOOKMARK    8222    // 6.50
#define IDR_ICO_PREVBOOKMARK    8223    // 6.50
#define IDR_ICO_CFORMAT         8224    // 6.50
#define IDR_ICO_SPACETOTAB      8225    // 6.50
#define IDR_ICO_TABTOSPACE      8226    // 6.50
// Difference.
#define IDR_ICO_PREVCHANGE      8227    // 7.0
#define IDR_ICO_NEXTCHANGE      8228    // 7.0
#define IDR_ICO_EXPANDED        8229    // 7.0
#define IDR_ICO_COLLAPSED       8230    // 7.0

// Cursor ID's.
//
#define IDR_CUR_RESIZELR        8231
#define IDR_CUR_RESIZEUD        8232
#define IDR_CUR_HOTSPOT         8233
#define IDR_CUR_FLOOD           8234
#define IDR_CUR_SPRAY           8235
#define IDR_CUR_CROSS           8236
#define IDR_CUR_PENCIL          8237
#define IDR_CUR_PICKCOLOR       8238
#define IDR_CUR_MAGNIFY         8239
#define IDR_CUR_OUTSEL          8240
#define IDR_CUR_MOVE            8241
#define IDR_CUR_DROPTOOL        8242
#define IDR_CUR_DRAGMOVE        8243
#define IDR_CUR_DRAGCOPY        8244
#define IDR_CUR_NODROP          8245

// Misc ID's.
//
#define IDR_JPG_SPLASH          8246
#define IDR_RAW_ANIFRAME        8247
#define IDR_DLL_SERVER          8248    // 4.50
#define IDR_WAV_DOH             8249
#define IDR_HTM_WELCOME         8250    // 7.0

#endif // _IDS_H
