/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */



@interface ML3Container : ML3Entity 
{
}

@property(readonly) ML3Predicate *staticPredicate;
@property(readonly) ML3Predicate *dynamicPredicate;
@property(getter=isLimitedByCount,readonly) BOOL limitedByCount;
@property(getter=isLimitOrderingDescending,readonly) BOOL limitOrderingDescending;
@property(readonly) NSString *limitingProperty;
@property(readonly) NSArray *limitOrderingProperties;
@property(readonly) long long limitValue;
@property(readonly) NSArray *displayOrderingProperties;

+ (void)initialize;
+ (id)databaseTable;
+ (id)defaultOrderingProperties;
+ (id)joinClauseForProperty:(id)arg1;
+ (id)orderingCollationForProperty:(id)arg1;
+ (id)sectionPropertyForProperty:(id)arg1;
+ (BOOL)hasCriterionInCriteriaList:(struct OpaqueSearchCriteriaList { }*)arg1 forITDBTrackField:(NSInteger)arg2;
+ (id)predicateForCriteriaList:(struct OpaqueSearchCriteriaList { }*)arg1 dynamicCriteria:(BOOL)arg2;
+ (void)populateStaticItemsOfDynamicContainersOnHandle:(struct sqlite3 { }*)arg1;

- (struct OpaqueSearchCriteriaList { }*)importedCriteriaList;
- (id)staticPredicate;
- (id)dynamicPredicate;
- (BOOL)isLimitedByCount;
- (BOOL)isLimitOrderingDescending;
- (id)limitingProperty;
- (id)limitOrderingProperties;
- (long long)limitValue;
- (id)displayOrderingProperties;
- (id)populateSQLWithStaticTrackPersistentID:(id)arg1;
- (void)bindPopulateStatement:(struct sqlite3_stmt { }*)arg1 withStaticTrackPersistentID:(id)arg2;

@end