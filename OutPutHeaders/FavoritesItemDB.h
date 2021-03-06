/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class MyFavoritesDB;

@interface FavoritesItemDB : XXUnknownSuperclass {
	MyFavoritesDB* _mmDB;
}
-(void).cxx_destruct;
-(id)getLastFavoritesItem;
-(BOOL)getFavoritesItemList:(id)list From:(unsigned long)from Limit:(unsigned long)limit;
-(BOOL)getDeletedItemList:(id)list;
-(BOOL)updateItemXMLInFavItemDB:(id)favItemDB;
-(BOOL)updateItemLocalStatus:(id)status;
-(BOOL)getAsyncUploadFailedItemList:(id)list;
-(BOOL)getAsyncUploadingItemList:(id)list;
-(id)checkBeforeAddItemByFavId:(unsigned long)anId andLocalId:(unsigned long)anId2;
-(unsigned long)getMaxLastUpdateTimeByUsrname:(id)usrname;
-(unsigned long)getItemCountByFromUsr:(id)usr andToUsr:(id)usr2;
-(unsigned long)getItemCountByUsrname:(id)usrname;
-(BOOL)getAllFavoritesItems:(id)items;
-(BOOL)updateItemUpdateTime:(unsigned long)time ByLocalId:(unsigned long)anId;
-(BOOL)updateUpdateSeq:(unsigned long)seq ByFavId:(unsigned long)anId;
-(BOOL)getNextPageNeedBatchGetFavoritesItemList:(id)list byType:(int)type andMinUpdateTime:(unsigned long)time;
-(BOOL)getFirstPageNeedBatchGetFavoritesItemList:(id)list byType:(int)type;
-(BOOL)getNeedBatchGetFavoritesItemList:(id)list byType:(int)type andMinUpdateTime:(unsigned long)time;
-(BOOL)getNextPageFavoritesItemList:(id)list byType:(int)type andCurMinUpdateTime:(unsigned long)time;
-(BOOL)getFirstPageFavoritesItemListContainUnBatchGet:(id)get;
-(BOOL)getFirstPageFavoritesItemList:(id)list byType:(int)type;
-(BOOL)updateItemInFavItemDBByFavObject:(id)favItemDBByFavObject;
-(BOOL)updateItemInFavItemDB:(id)favItemDB;
-(BOOL)getDownloadFailedItemList:(id)list;
-(BOOL)getUploadFailedItemList:(id)list;
-(BOOL)getDownloadingItemList:(id)list;
-(BOOL)getUploadingItemList:(id)list;
-(BOOL)deleteFavoritesItemByLocalItemId:(unsigned long)anId;
-(BOOL)deleteFavoritesItemById:(unsigned long)anId;
-(id)getFavoritesItemBySourceId:(id)anId;
-(id)getFavoritesItemByLocalId:(unsigned long)anId;
-(id)getFavoritesItemById:(unsigned long)anId;
-(BOOL)insertNewRowInFavoritesItem:(id)favoritesItem XML:(id)xml;
-(void)fillItemsArray:(id)array withDBItems:(id)dbitems;
-(void)fillDBFavItem:(id)item fromFavObject:(id)favObject;
-(void)fillDBFavItem:(id)item fromFavItem:(id)favItem xml:(id)xml;
-(void)fillDBFavItem:(id)item fromFavItem:(id)favItem;
-(BOOL)getFavoritesItemValue:(id)value fromDBItem:(id)dbitem;
-(id)DBContext;
-(void)initDB:(id)db;
-(id)init;
@end

