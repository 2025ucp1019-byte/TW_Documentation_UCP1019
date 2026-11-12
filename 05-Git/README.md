
# Git Command Reference Guide

## 1. Git Version and Configuration

### 1.1 Check Git Version

```bash
git --version
```

Displays the currently installed Git version.

### 1.2 Configure Username

```bash
git config --global user.name "Your Name"
```

Sets the username that will be associated with your commits across all repositories.

### 1.3 Configure Email

```bash
git config --global user.email "your@email.com"
```

Sets the email address associated with your Git commits.

### 1.4 View Configuration

```bash
git config --list
```

Displays the current Git configuration settings.

```bash
git config user.name
git config user.email
```

Displays the configured username and email address.

---

## 2. Repository Initialization and Cloning

### 2.1 Initialize a Repository

```bash
git init
```

Initializes a new Git repository in the current directory by creating a hidden `.git` directory.

### 2.2 Clone a Repository

```bash
git clone <repository-url>
```

Creates a local copy of an existing remote repository, including its files and commit history.

Example:

```bash
git clone https://github.com/username/project.git
```

### 2.3 Clone into a Specific Folder

```bash
git clone <repository-url> <folder-name>
```

Clones a repository into a directory with the specified name.

---

## 3. Checking Repository Status

### 3.1 Git Status

```bash
git status
```

Displays the current state of the working directory and staging area.

It shows:
- Modified files.
- Untracked files.
- Staged files.
- Changes ready to be committed.

### 3.2 Short Status

```bash
git status --short
```

Displays a compact summary of the repository status.

---

## 4. Adding and Staging Files

### 4.1 Add a Specific File

```bash
git add filename
```

Adds a particular file to the staging area.

Example:

```bash
git add main.cpp
```

### 4.2 Add All Files

```bash
git add .
```

Stages new and modified files in the current directory and its subdirectories.

### 4.3 Add All Changes

```bash
git add -A
```

Stages all changes, including file additions, modifications, and deletions throughout the repository.

---

## 5. Committing Changes

### 5.1 Create a Commit

```bash
git commit -m "Commit message"
```

Records the staged changes in the repository history with a descriptive message.

Example:

```bash
git commit -m "Add documentation files"
```

### 5.2 Commit All Tracked Changes

```bash
git commit -am "Commit message"
```

Stages and commits modifications and deletions of already tracked files. It does not automatically include new untracked files.

### 5.3 Amend the Previous Commit

```bash
git commit --amend -m "Updated commit message"
```

Replaces the most recent commit with a new commit containing the staged changes and updated message.

---

## 6. Viewing Commit History

### 6.1 View Commit History

```bash
git log
```

Displays the commit history, including commit IDs, authors, dates, and messages.

### 6.2 Compact Commit History

```bash
git log --oneline
```

Displays each commit in a single compact line.

### 6.3 View Recent Commits

```bash
git log -n 5
```

Displays the five most recent commits.

---





### 7.1 View Remote Repositories

```bash
git remote -v
```

Displays the names and URLs of configured remote repositories.

### 7.2 Add a Remote Repository

```bash
git remote add origin <repository-url>
```

Connects the local repository to a remote repository. The name `origin` is commonly used as the default remote name.

### 7.3 Change Remote URL

```bash
git remote set-url origin <new-url>
```

Changes the URL associated with the specified remote repository.

### 7.4 Remove a Remote

```bash
git remote remove origin
```

Removes the specified remote connection from the local repository.

---


## 8. Ignoring Files Using .gitignore

A `.gitignore` file specifies files and directories that Git should ignore when detecting untracked files.

Example `.gitignore`:

```text
*.log
*.tmp
build/
node_modules/
.env
```

Commonly used commands:

```bash
git status
git add .
```

Git will ignore matching untracked files and directories according to the `.gitignore` rules.

Note: `.gitignore` does not automatically stop tracking files that are already tracked by Git.

---

## 9. Useful Git Command Summary

| Command | Purpose |
|---|---|
| `git --version` | Check Git version |
| `git init` | Initialize a repository |
| `git clone` | Clone a repository |
| `git status` | Check repository status |
| `git add .` | Stage changes |
| `git commit -m` | Create a commit |
| `git log` | View commit history |
| `git diff` | Compare changes |
| `git branch` | List branches |
| `git checkout` | Switch branches |
| `git switch` | Switch branches |
| `git merge` | Merge branches |
| `git remote -v` | View remote repositories |
| `git push` | Upload commits |
| `git pull` | Fetch and integrate changes |
| `git fetch` | Download remote updates |
| `git rm` | Remove tracked files |
| `git mv` | Rename or move tracked files |
| `git restore` | Restore file changes |
| `git reset` | Move branch history pointer |
| `git stash` | Temporarily save changes |

---
