//
//  SYPBXProjArchiver.h
//  XcodeProjectEditor
//
//  Created by Daniel DeCovnick on 4/2/10.
//  Copyright 2010 Softyards Software. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class PBXProject;


@interface SYPBXProjArchiver : NSObject {
	NSMutableDictionary *objectsByArchiveIDs;
	NSDictionary *projectHash;
}
@property (readonly, retain) NSDictionary *objectsByArchiveIDs;
+ (SYPBXProjArchiver *)newUnarchiverWithFile:(NSString *)filePath;
- (PBXProject *)unarchive;
+ (PBXProject *)unarchiveHash:(NSDictionary *)hash;
- (NSDictionary *)archiveToHash;
@end
