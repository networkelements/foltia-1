static STATION bsSta[] = {
	{ "NHK BS1", "3001.ontvjapan.com", 16625, 4, 101},
	{ "NHK BS2", "3002.ontvjapan.com", 16625, 4, 102},//廃止 2011/3/31 
	{ "NHK BSプレミアム", "3003.ontvjapan.com", 16626, 4, 103},
	{ "BS日テレ", "3004.ontvjapan.com", 16592, 4, 141},
	{ "BS朝日", "3005.ontvjapan.com", 16400, 4, 151},
	{ "BS-TBS", "3006.ontvjapan.com", 16401, 4, 161},
	{ "BSジャパン", "3007.ontvjapan.com", 16433, 4, 171},
	{ "BSフジ", "3008.ontvjapan.com", 16593, 4, 181},
	{ "WOWOW", "3009.ontvjapan.com", 16432, 4, 191},
	{ "WOWOW2", "3010.ontvjapan.com", 16432, 4, 192},
	{ "WOWOW3", "3011.ontvjapan.com", 16432, 4, 193},
	{ "スター・チャンネル", "3012.ontvjapan.com", 16529, 4, 200},
	{ "BS11", "3013.ontvjapan.com", 16528, 4, 211},
	{ "TwellV", "3014.ontvjapan.com", 16530, 4, 222},
};

static int bsStaCount = sizeof(bsSta) / sizeof (STATION);



static STATION csSta[] = {
	{ "スターｃｈプラス", "1002.ontvjapan.com", 24608, 6, 237},
	{ "日本映画専門ｃｈＨＤ", "1086.ontvjapan.com", 24608, 6, 239},
	{ "フジテレビＮＥＸＴ", "306ch.epgdata.ontvjapan", 24608, 6, 306},//フジテレビCSHD →
	{ "ショップチャンネル", "1059.ontvjapan.com", 24704, 6, 55},
	{ "ザ・シネマ", "1217.ontvjapan.com", 24736, 6, 228},
	{ "スカチャンＨＤ８００", "800ch.epgdata.ontvjapan", 24736, 6, 800},
	{ "スカチャン８０１", "801ch.epgdata.ontvjapan", 24736, 6, 801},
	{ "スカチャン８０２", "802ch.epgdata.ontvjapan", 24736, 6, 802},
	{ "ｅ２プロモ", "100ch.epgdata.ontvjapan", 28736, 7, 100},
	{ "インターローカルＴＶ", "194ch.epgdata.ontvjapan", 28736, 7, 194},
	{ "Ｊスポーツ　ＥＳＰＮ", "1025.ontvjapan.com", 28736, 7, 256},
	{ "ＦＯＸ", "1016.ontvjapan.com", 28736, 7, 312},
	{ "スペースシャワーＴＶ", "1018.ontvjapan.com", 28736, 7, 322},
	{ "カートゥーン　ネット", "1046.ontvjapan.com", 28736, 7, 331},
	{ "トゥーン・ディズニー", "1213.ontvjapan.com", 28736, 7, 334},
	{ "東映チャンネル", "1010.ontvjapan.com", 28768, 7, 221},
	{ "衛星劇場", "1005.ontvjapan.com", 28768, 7, 222},
	{ "チャンネルＮＥＣＯ", "1008.ontvjapan.com", 28768, 7, 223},
	{ "洋画★シネフィル", "1009.ontvjapan.com", 28768, 7, 224},
	{ "スター・クラシック", "1003.ontvjapan.com", 28768, 7, 238},
	{ "時代劇専門チャンネル", "1133.ontvjapan.com", 28768, 7, 292},
	{ "スーパードラマ", "1006.ontvjapan.com", 28768, 7, 310},
	{ "ＡＸＮ", "1014.ontvjapan.com", 28768, 7, 311},
	{ "ナショジオチャンネル", "1204.ontvjapan.com", 28768, 7, 343},
	{ "ワンテンポータル", "110ch.epgdata.ontvjapan", 28864, 7, 110},
	{ "ゴルフチャンネル", "1028.ontvjapan.com", 28864, 7, 260},
	{ "テレ朝チャンネル", "1092.ontvjapan.com", 28864, 7, 303},
	{ "ＭＴＶ", "1019.ontvjapan.com", 28864, 7, 323},
	{ "ミュージック・エア", "1024.ontvjapan.com", 28864, 7, 324},
	{ "朝日ニュースター", "1067.ontvjapan.com", 28864, 7, 352},
	{ "ＢＢＣワールド", "1070.ontvjapan.com", 28864, 7, 353},
	{ "ＣＮＮｊ", "1069.ontvjapan.com", 28864, 7, 354},
	{ "ジャスト・アイ", "361ch.epgdata.ontvjapan", 28864, 7, 361},
	{ "Ｊスポーツ　１", "1041.ontvjapan.com", 28896, 7, 251},
	{ "Ｊスポーツ　２", "1042.ontvjapan.com", 28896, 7, 252},
	{ "ＪスポーツＰｌｕｓＨ", "1043.ontvjapan.com", 28896, 7, 253},
	{ "ＧＡＯＲＡ", "1026.ontvjapan.com", 28896, 7, 254},
	{ "ｓｋｙ・Ａスポーツ＋", "1040.ontvjapan.com", 28896, 7, 255},
	{ "宝塚プロモチャンネル", "101ch.epgdata.ontvjapan", 28928, 7, 101},
	{ "ＳＫＹ・ＳＴＡＧＥ", "1207.ontvjapan.com", 28928, 7, 290},
	{ "チャンネル銀河", "305ch.epgdata.ontvjapan", 28928, 7, 305},
	{ "ＡＴ-Ｘ", "1201.ontvjapan.com", 28928, 7, 333},
	{ "ヒストリーチャンネル", "1050.ontvjapan.com", 28928, 7, 342},
	{ "スカチャン８０３", "803ch.epgdata.ontvjapan", 28928, 7, 803},
	{ "スカチャン８０４", "804ch.epgdata.ontvjapan", 28928, 7, 804},
	{ "ムービープラスＨＤ", "1007.ontvjapan.com", 28960, 7, 240},
	{ "ゴルフネットワーク", "1027.ontvjapan.com", 28960, 7, 262},
	{ "ＬａＬａ　ＨＤ", "1074.ontvjapan.com", 28960, 7, 314},
	{ "フジテレビＯＮＥ", "1073.ontvjapan.com", 28992, 7, 307},//フジテレビ739→
	{ "フジテレビＴＷＯ", "1072.ontvjapan.com", 28992, 7, 308},//フジテレビ721→
	{ "アニマックス", "1047.ontvjapan.com", 28992, 7, 332},
	{ "ディスカバリー", "1062.ontvjapan.com", 28992, 7, 340},
	{ "アニマルプラネット", "1193.ontvjapan.com", 28992, 7, 341},
	{ "Ｃ-ＴＢＳウエルカム", "160ch.epgdata.ontvjapan", 29024, 7, 160},
	{ "ＱＶＣ", "1120.ontvjapan.com", 29024, 7, 161},
	{ "プライム３６５．ＴＶ", "185ch.epgdata.ontvjapan", 29024, 7, 185},
	{ "ファミリー劇場", "1015.ontvjapan.com", 29024, 7, 293},
	{ "ＴＢＳチャンネル", "3201.ontvjapan.com", 29024, 7, 301},
	{ "ディズニーチャンネル", "1090.ontvjapan.com", 29024, 7, 304},
	{ "MUSIC ON! TV", "1022.ontvjapan.com", 29024, 7, 325},
	{ "キッズステーションHD", "1045.ontvjapan.com", 29024, 7, 335},//HDに
	{ "ＴＢＳニュースバード", "1076.ontvjapan.com", 29024, 7, 351},
	{ "ＣＳ日本番組ガイド", "147ch.epgdata.ontvjapan", 29056, 7, 147},
	{ "日テレＧ＋", "1068.ontvjapan.com", 29056, 7, 257},
	{ "fashion TV", "5004.ontvjapan.com", 29056, 7, 291},
	{ "日テレプラス", "300ch.epgdata.ontvjapan", 29056, 7, 300},
	{ "エコミュージックＴＶ", "1023.ontvjapan.com", 29056, 7, 320},
	{ "Music Japan TV", "1208.ontvjapan.com", 29056, 7, 321},
	{ "日テレＮＥＷＳ２４", "2002.ontvjapan.com", 29056, 7, 350},
};

static int csStaCount = sizeof(csSta) / sizeof (STATION);
