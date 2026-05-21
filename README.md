# Masters

Consolidated repository of all coursework, research, and projects from my
masters program. Each top-level directory was previously its own GitHub
repository; full commit history is preserved here via `git subtree`.

## Layout

The repo is grouped by **theme** for navigation, but folder names are kept
identical to the original repositories so any external links, notes, or
references still resolve.

### Coursework

| Folder | Description |
| --- | --- |
| [Claude_Personal_AI_ML_Class_and_Notes](Claude_Personal_AI_ML_Class_and_Notes) | AI / Machine Learning class environment and notes (Python). Most recently active. |
| [Fall-2025](Fall-2025) | Fall 2025 semester — class folders, lab reports (Nuclear Grad Lab, etc.), notes. |
| [Master_w_TS](Master_w_TS) | Earlier coursework — Gradlab labs (Abundances, Cosmics, Simulations), Coding_A outputs, masters research folder. |
| [Masters-Works](Masters-Works) | Earliest masters folder, including Spring 2022 work (towerslope, variable binning, l3 rebin analyses). |

### Research

| Folder | Description |
| --- | --- |
| [Spring_Summer_2026_research](Spring_Summer_2026_research) | Spring / Summer 2026 research work. |
| [RCP_Masters_work](RCP_Masters_work) | RCP-related masters work. |

## Timeline (by most recent activity in source repo)

| Folder | Last push |
| --- | --- |
| Claude_Personal_AI_ML_Class_and_Notes | 2026-05 |
| Spring_Summer_2026_research | 2026-04 |
| RCP_Masters_work | 2025-09 |
| Masters-Works | 2025-02 |
| Master_w_TS | 2024-12 |
| Fall-2025 | 2024-12 |

## Notes on the merge

- Each source repo was added with `git subtree add --prefix=<name>`, so the
  full commit history of every source repo is reachable via `git log` here.
- A handful of files in `Masters-Works`, `Master_w_TS`, and `Fall-2025` had
  Windows-incompatible characters in their paths (the `:Zone.Identifier`
  alternate-data-stream artifact and one `Lab2:Cosmics` directory). Those
  paths were rewritten in history (`:` → `_`) so the tree checks out cleanly
  on Windows.
- A small number of files in `Masters-Works` and `Master_w_TS` have
  case-only filename collisions (e.g. `S.root` vs `s.root`). Both versions
  remain in git history and are visible on GitHub, but on Windows only one
  can sit in the working tree at a time. Those entries are marked
  `skip-worktree` locally so they don't show as perpetually "modified".
- One PDF in `Master_w_TS` was originally tracked via Git LFS and the LFS
  object no longer exists on the server. The pointer file is preserved but
  the content cannot be checked out (`GIT_LFS_SKIP_SMUDGE=1` is set).
